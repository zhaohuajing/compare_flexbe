from setuptools import find_packages
from setuptools import setup

setup(
    name='compare_flexbe_behaviors',
    version='0.0.1',
    packages=find_packages(
        include=('compare_flexbe_behaviors', 'compare_flexbe_behaviors.*')),
)
