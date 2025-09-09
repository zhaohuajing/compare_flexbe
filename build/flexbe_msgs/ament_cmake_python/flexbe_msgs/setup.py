from setuptools import find_packages
from setuptools import setup

setup(
    name='flexbe_msgs',
    version='4.0.1',
    packages=find_packages(
        include=('flexbe_msgs', 'flexbe_msgs.*')),
)
