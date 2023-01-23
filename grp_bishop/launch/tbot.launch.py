import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node 

def generate_launch_description():

    tbot_start_path = get_package_share_directory('tbot_start')
    launch_file_dir = os.path.join(tbot_start_path, 'launch')

    return LaunchDescription([
        #Launch Bot+Laser
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([launch_file_dir, '/minimal.launch.py']),
            ),

        #Launch reactive_move
        #Node(
        #    package='grp_bishop',
        #    executable='reactive_move',
        #    name='reactive',
        #),
            
        Node(
            package='grp_bishop',
            executable='realsense',
            name='realsense'
        ),

        Node(
            package='grp_bishop',
            executable='bouteille_detect',
            name='bouteille_detect'
        )

        ]
    )