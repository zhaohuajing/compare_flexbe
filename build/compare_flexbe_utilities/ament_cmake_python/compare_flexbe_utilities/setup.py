from setuptools import find_packages
from setuptools import setup

setup(
    name='compare_flexbe_utilities',
    version='0.0.0',
    packages=find_packages(
        include=('compare_flexbe_utilities', 'compare_flexbe_utilities.*')),
)
