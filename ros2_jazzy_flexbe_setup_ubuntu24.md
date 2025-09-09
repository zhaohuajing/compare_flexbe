
# ROS 2 Jazzy + FlexBE Setup on Ubuntu 24.04

This document summarizes all package installations and configurations performed after upgrading to **Ubuntu 24.04 (Noble Numbat)** for setting up **ROS 2 Jazzy**, **Gazebo**, **MoveIt**, and **FlexBE**.

---

## ✅ System & ROS 2 Setup

### 1. Upgraded to Ubuntu 24.04

### 2. Installed ROS 2 Jazzy
```bash
sudo apt update && sudo apt install curl gnupg2 lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update
sudo apt install ros-jazzy-desktop
```

### 3. Environment Setup
```bash
echo 'source /opt/ros/jazzy/setup.bash' >> ~/.bashrc
source ~/.bashrc
```

---

## ✅ ROS 2 Dev Tools

### 4. ROS Tools and Dependencies
```bash
sudo apt install python3-colcon-common-extensions python3-pip
pip3 install -U colcon-mixin vcstool
```

---

## ✅ FlexBE Setup

### 5. Cloned & Built FlexBE
```bash
mkdir -p ~/flexbe_ws/src
cd ~/flexbe_ws/src
# Clone FlexBE packages here (flexbe_behavior_engine, flexbe_webui, etc.)
cd ~/flexbe_ws
colcon build --symlink-install
source install/setup.bash
```

### 6. Fixed FastAPI / Pydantic / WebUI Dependencies
```bash
pip3 install --upgrade --break-system-packages \
  "pydantic<2.0" "fastapi<0.95" "uvicorn[standard]" websockets PySide6
```

---

## ✅ MoveIt & Gazebo Integration

### 7. Installed MoveIt & Controllers
```bash
sudo apt install ros-jazzy-moveit ros-jazzy-ros2-control ros-jazzy-ros2-controllers
sudo apt install ros-jazzy-joint-state-publisher-gui
```

### 8. Installed Gazebo Garden
```bash
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 67170598AF249743
sudo apt update
sudo apt install gz-garden
```

---

## ✅ Miscellaneous / Support Packages

### 9. Resolved `pcl_ros` CMake Error
```bash
sudo apt install ros-jazzy-pcl-ros
```

### 10. Optional but Useful Tools
```bash
sudo apt install python3-vcstool net-tools
```

---

## 🧼 Unsets & Recovery

Recovered environment after unsetting key variables:
```bash
exec bash
source /opt/ros/jazzy/setup.bash
```

---

## ✅ Final Working Setup

- Gazebo starts with proper robot physics
- MoveIt launches with robot control and planning
- FlexBE WebUI works (via `ros2 launch flexbe_webui flexbe_full.launch.py`)
- FlexBE accessible via browser: [http://localhost:8000](http://localhost:8000)

---
