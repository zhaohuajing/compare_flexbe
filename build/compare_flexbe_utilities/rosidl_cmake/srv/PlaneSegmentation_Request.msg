sensor_msgs/PointCloud2 input
bool use_voxel                          # run RANSAC on a downsampled copy for speed
float32 leaf_size                       # voxel size
float32 distance_threshold              # RANSAC distance for plane detection on filtered cloud
int32 max_iterations                    # RANSAC iterations
