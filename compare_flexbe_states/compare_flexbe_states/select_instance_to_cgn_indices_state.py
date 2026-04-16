#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import json
from flexbe_core import EventState, Logger
<<<<<<< HEAD
import subprocess
import numpy as np

class SelectInstanceToSceneNameState(EventState):
    def __init__(self,
                 default_scene_name: str = 'scene_from_ucn',
                 selection_mode: str = 'largest_or_manual',  # 'largest' | 'manual' | 'largest_or_manual'
                 allow_background: bool = False,
                 manual_sentinel: int = -1):
        super().__init__(
            outcomes=['finished', 'failed'],
            input_keys=[
                'seg_json', 'result_dir', 'instance_ids_2d', 'instance_id_list', 'im_name',
                'manual_target_instance_id'   # NEW
            ],
            output_keys=['target_instance_id', 'scene_name', 'message']
        )
        self._default_scene_name = str(default_scene_name)
        self._selection_mode = str(selection_mode).lower().strip()
        self._allow_background = bool(allow_background)
        self._manual_sentinel = int(manual_sentinel)

=======
import subprocess, os

class SelectInstanceToSceneNameState(EventState):
    """
    Selects a segmented instance (from RGBD-based unseen-object-clustering) and
    maps it to a Contact-GraspNet scene name.

    This is the "bridge" between:
      - UnseenObjSegRGBDServiceState (SegImage service: /segmentation_rgbd)
      - Contact-GraspNet RGBD server (expects <scene_name>.npy in test_data/)

    For now this state:
      1) Picks a target instance id (largest 2D mask by area).
      2) Sets `userdata.scene_name` to a configurable default, e.g. 'scene_from_ucn'.
         (Assuming your helper script / background process converts the UCN outputs
          into test_data/<scene_name>.npy.)

    You can later extend this state to actually call your UCN→CGN helper script
    via subprocess using `result_dir`, `im_name`, and `target_instance_id`.

    ># seg_json          dict/str   Parsed segmentation.json or JSON string
    ># result_dir        string     Directory containing im_label.npy, sample.npz, etc.
    ># instance_ids_2d   int[][]    HxW array of per-pixel instance IDs (from SegImage)
    ># instance_id_list  int[]      Unique instance IDs (non-background)
    ># im_name           string     Base name used by segmentation_rgbd_server (e.g. 'from_rgbd')

    <# target_instance_id  int       Chosen instance id
    <# scene_name          string    Scene name to be used by Contact-GraspNet (without .npy)
    <# message             string    Debug / logging text

    <= finished                    Instance + scene name selected
    <= failed                      Something went wrong (e.g. no instances)
    """

    def __init__(self, default_scene_name: str = 'scene_from_ucn'):
        super().__init__(
            outcomes=['finished', 'failed'],
            input_keys=['seg_json', 'result_dir', 'instance_ids_2d', 'instance_id_list', 'im_name'],
            output_keys=['target_instance_id', 'scene_name', 'message']
        )
        self._default_scene_name = str(default_scene_name)
>>>>>>> legacy-feature-cgn
        self._had_error = False
        self._target_id = None
        self._msg = ""

<<<<<<< HEAD
    def _pick_largest(self, instance_ids, instance_ids_2d):
        best_id = None
        best_area = -1
        areas = {}

        for inst_id in instance_ids:
            mask = (instance_ids_2d == inst_id)
            area = int(mask.sum())
            areas[int(inst_id)] = area
            Logger.loginfo(f"[SelectInstanceToSceneNameState] Instance {inst_id} has area {area}.")
            if area > best_area:
                best_area = area
                best_id = inst_id

        return (None, None, areas) if best_id is None else (int(best_id), int(best_area), areas)

    def _get_manual_id(self, userdata):
        # Accept None, missing, sentinel => "not provided"
        if not hasattr(userdata, 'manual_target_instance_id'):
            return None
        v = userdata.manual_target_instance_id
        if v is None:
            return None
        try:
            v = int(v)
        except Exception:
            return None
        if v == self._manual_sentinel:
            return None
        return v

=======
>>>>>>> legacy-feature-cgn
    def on_enter(self, userdata):
        self._had_error = False
        self._target_id = None
        self._msg = ""

        try:
<<<<<<< HEAD
=======
            # seg_json may come in as dict or as JSON string
>>>>>>> legacy-feature-cgn
            seg = userdata.seg_json
            if isinstance(seg, str):
                seg = json.loads(seg)

<<<<<<< HEAD
            instance_ids = list(userdata.instance_id_list) if userdata.instance_id_list else []
            if not self._allow_background:
                instance_ids = [i for i in instance_ids if int(i) != 0]

=======
            instance_ids = userdata.instance_id_list
>>>>>>> legacy-feature-cgn
            if not instance_ids:
                self._msg = "[SelectInstanceToSceneNameState] No instance ids found."
                Logger.logwarn(self._msg)
                self._had_error = True
                return

<<<<<<< HEAD
            instance_ids_2d = np.array(userdata.instance_ids_2d, dtype=np.int32)

            best_id, best_area, areas = self._pick_largest(instance_ids, instance_ids_2d)
            if best_id is None or best_area is None or best_area <= 0:
=======
            # Select instance with largest 2D mask area
            import numpy as np
            instance_ids_2d = np.array(userdata.instance_ids_2d, dtype=np.int32)
            best_id = None
            best_area = -1

            for inst_id in instance_ids:
                mask = (instance_ids_2d == inst_id)
                area = int(mask.sum())
                Logger.loginfo(f"[SelectInstanceToSceneNameState] Instance {inst_id} has area {area}.")
                if area > best_area:
                    best_area = area
                    best_id = inst_id

            if best_id is None or best_area <= 0:
>>>>>>> legacy-feature-cgn
                self._msg = "[SelectInstanceToSceneNameState] Failed to find a non-empty instance mask."
                Logger.logwarn(self._msg)
                self._had_error = True
                return

<<<<<<< HEAD
            # NEW: manual id from userdata
            manual_id = self._get_manual_id(userdata)

            # Decide
            if self._selection_mode == 'largest':
                chosen_id = best_id
            elif self._selection_mode == 'manual':
                if manual_id is None:
                    self._msg = ("[SelectInstanceToSceneNameState] selection_mode='manual' but "
                                 "manual_target_instance_id was not provided.")
                    Logger.logwarn(self._msg)
                    self._had_error = True
                    return
                chosen_id = manual_id
            else:  # 'largest_or_manual' default
                chosen_id = manual_id if manual_id is not None else best_id

            # Validate chosen_id
            valid_ids = [int(x) for x in instance_ids]
            if int(chosen_id) not in valid_ids:
                self._msg = (f"[SelectInstanceToSceneNameState] Chosen instance id {chosen_id} "
                             f"is not in instance_id_list {valid_ids}.")
                Logger.logwarn(self._msg)
                self._had_error = True
                return

            chosen_area = areas.get(int(chosen_id), -1)
            self._target_id = int(chosen_id)
            self._msg = (f"[SelectInstanceToSceneNameState] Selected instance {self._target_id} "
                         f"(area={chosen_area}) → scene_name='{self._default_scene_name}'")
            Logger.loginfo(self._msg)

            cmd = [
                "python3",
                "/home/csrobot/graspnet_ws/src/contact_graspnet_ros2/contact_graspnet/test_data/ucn_to_cgn_scene.py",
                # IMPORTANT: if your script supports args, you should pass them here:
=======
            self._target_id = int(best_id)
            # Right now we assume you already generated test_data/scene_from_ucn.npy
            # from UCN/segmentation outputs. If your helper script creates
            # different names, change this default or build it from im_name/inst_id.
            self._msg = (f"[SelectInstanceToSceneNameState] Selected instance {self._target_id} "
                         f"(area={best_area}) → scene_name='{self._default_scene_name}'")

            Logger.loginfo(self._msg)

            # NOTE: If you want this state to also *trigger* the conversion script,
            # you can do it here, e.g.:
            
            cmd = [
                "python3",
                "/home/csrobot/graspnet_ws/src/contact_graspnet_ros2/contact_graspnet/test_data/ucn_to_cgn_scene.py",
                # "--fx", 615.0,
                # "--fy", 615.0,
                # "--cx", 320.0,
                # "--cy", 240.0,
>>>>>>> legacy-feature-cgn
                # "--im_name", userdata.im_name,
                # "--seg_dir", userdata.result_dir,
                # "--scene_name", self._default_scene_name,
                # "--target_id", str(self._target_id),
            ]
            subprocess.check_call(cmd)
<<<<<<< HEAD

            Logger.loginfo("[SelectInstanceToSceneNameState] Generated contact_graspnet/test_data/scene_from_ucn.npy using ucn_to_cgn_scene.py")

=======
            
>>>>>>> legacy-feature-cgn
        except Exception as e:
            self._msg = f"[SelectInstanceToSceneNameState] Exception: {e}"
            Logger.logerr(self._msg)
            self._had_error = True

    def execute(self, userdata):
        if self._had_error:
            userdata.message = self._msg
            return 'failed'

        userdata.target_instance_id = self._target_id
        userdata.scene_name = self._default_scene_name
        userdata.message = self._msg
<<<<<<< HEAD
        return 'finished'
=======
        return 'finished'
>>>>>>> legacy-feature-cgn
