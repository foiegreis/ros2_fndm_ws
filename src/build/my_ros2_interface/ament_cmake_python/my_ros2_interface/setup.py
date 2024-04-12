from setuptools import find_packages
from setuptools import setup

setup(
    name='my_ros2_interface',
    version='0.0.0',
    packages=find_packages(
        include=('my_ros2_interface', 'my_ros2_interface.*')),
)
