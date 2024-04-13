from launch import LaunchDescription
from launch_ros.actions import Node

# exactly this name!
def generate_launch_description():

    #instantiate a LaunchDescription object
    ld = LaunchDescription()

    server_node = Node(
        package = 'cpp_pkg',    
        executable = 'sum_server_cpp',
        )
 
    client_node = Node(
        package = 'py_pkg', 
        executable = 'sum_client_py', 
        parameters = [{'a': 4,
                       'b': 7}]  
    )

    # launch description
    ld.add_action(server_node)
    ld.add_action(client_node)

    return ld