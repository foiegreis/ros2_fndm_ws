from setuptools import find_packages, setup

package_name = 'py_actions'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='foiegreis',
    maintainer_email='roboticsunveiled@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'fibonacci_server = py_actions.fibonacci_server:main',
            'fibonacci_client = py_actions.fibonacci_client:main',
            'fibonacci_cancel_server = py_actions.fibonacci_cancel_server:main',
            'fibonacci_cancel_client = py_actions.fibonacci_cancel_client:main',
        ],
    },
)
