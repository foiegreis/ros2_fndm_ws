from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_py_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('cpp_py_pkg', 'cpp_py_pkg.*')),
)
