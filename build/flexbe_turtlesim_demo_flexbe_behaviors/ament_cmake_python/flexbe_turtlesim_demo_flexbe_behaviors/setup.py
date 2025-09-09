from setuptools import find_packages
from setuptools import setup

setup(
    name='flexbe_turtlesim_demo_flexbe_behaviors',
    version='1.0.0',
    packages=find_packages(
        include=('flexbe_turtlesim_demo_flexbe_behaviors', 'flexbe_turtlesim_demo_flexbe_behaviors.*')),
)
