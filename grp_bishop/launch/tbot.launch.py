import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node 

def generate_launch_description():

    tbot_start_path = get_package_share_directory('tbot_start')
    launch_tbot_file_dir = os.path.join(tbot_start_path, 'launch')
    slam_toolbox_path = get_package_share_directory('slam_toolbox')
    launch_slam_file_dir = os.path.join(slam_toolbox_path, 'launch')

    return LaunchDescription([
        #Launch Bot+Laser
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([launch_tbot_file_dir, '/minimal.launch.py']),
            ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([launch_slam_file_dir, '/online_sync_launch.py']),
            launch_arguments={
                'use_sim_time': 'False'
            }.items()
            ),

        #Launch reactive_move
        #Node(
        #    package='grp_bishop',
        #    executable='reactive_move',
        #    name='reactive',
        #),

        #Launch realsense    
        Node(
            package='grp_bishop',
            executable='realsense',
            name='realsense'
        ),

        #Launch bouteille_detect
        Node(
            package='grp_bishop',
            executable='bouteille_detect',
            name='bouteille_detect'
        )

        ]
    )