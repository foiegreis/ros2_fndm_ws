from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_fndm_interface',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_fndm_interface', 'ros2_fndm_interface.*')),
)
