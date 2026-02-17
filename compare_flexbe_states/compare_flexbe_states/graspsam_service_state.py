from flexbe_core import EventState, Logger
from flexbe_core.proxy import ProxyServiceCaller

from graspsam_ros2.srv import RunGraspSAM


class GraspSAMServiceState(EventState):
    def __init__(self, service_name='/run_graspsam',
                 dataset_root='',
                 dataset_name='from_rgbd',
                 checkpoint_path='pretrained_checkpoint/mobile_sam.pt',
                 sam_encoder_type='vit_t',
                 no_grasps=10,
                 seen_set=False):

        super().__init__(outcomes=['done', 'failed'],
                         output_keys=['graspsam_output_dir', 'graspsam_message', 'grasps'])

        self._service_name = service_name
        self._caller = ProxyServiceCaller({self._service_name: RunGraspSAM})

        # store defaults (can be overridden by userdata if you wired it that way)
        self._dataset_root = dataset_root
        self._dataset_name = dataset_name
        self._checkpoint_path = checkpoint_path
        self._sam_encoder_type = sam_encoder_type
        self._no_grasps = no_grasps
        self._seen_set = seen_set

        self._sent = False
        self._response = None
        self._failed = False

    def on_enter(self, userdata):
        self._sent = False
        self._response = None
        self._failed = False

        req = RunGraspSAM.Request()
        req.dataset_root = self._dataset_root
        req.dataset_name = self._dataset_name
        req.checkpoint_path = self._checkpoint_path
        req.sam_encoder_type = self._sam_encoder_type
        req.no_grasps = int(self._no_grasps)
        req.seen_set = bool(self._seen_set)

        Logger.loginfo(
            f"[GraspSAMServiceState] Calling {self._service_name} with "
            f"dataset_root={req.dataset_root}, dataset_name={req.dataset_name}, "
            f"checkpoint={req.checkpoint_path}, encoder={req.sam_encoder_type}, "
            f"no_grasps={req.no_grasps}, seen_set={req.seen_set}"
        )

        try:
            # IMPORTANT: positional callback (NOT callback=...)
            self._caller.call_async(self._service_name, req, self._done_cb)
            self._sent = True
        except Exception as e:
            Logger.logerr(f"[GraspSAMServiceState] Failed to call service: {e}")
            self._failed = True

    def _done_cb(self, future):
        try:
            self._response = future.result()
        except Exception as e:
            Logger.logerr(f"[GraspSAMServiceState] Service callback exception: {e}")
            self._failed = True
            self._response = None

    def execute(self, userdata):
        if self._failed:
            return 'failed'

        if not self._sent:
            return None  # keep waiting (shouldn’t happen normally)

        if self._response is None:
            return None  # keep waiting

        # got response
        userdata.graspsam_output_dir = self._response.output_dir
        userdata.graspsam_message = self._response.message

        # only if your srv Response includes grasps[]
        if hasattr(self._response, 'grasps'):
            userdata.grasps = list(self._response.grasps)

        return 'done' if self._response.success else 'failed'
