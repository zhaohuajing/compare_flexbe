"""Setup script for flexbe_mirror package."""

from setuptools import find_packages
from setuptools import setup

PACKAGE_NAME = 'flexbe_mirror'

setup(
    name=PACKAGE_NAME,
    version='4.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + PACKAGE_NAME]),
        ('share/' + PACKAGE_NAME, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='phil',
    maintainer_email='philsplus@gmail.com',
    description='flexbe_mirror implements functionality to remotely mirror an executed behavior.',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'behavior_mirror_sm = flexbe_mirror.behavior_mirror_sm:main'
        ],
    },
)
