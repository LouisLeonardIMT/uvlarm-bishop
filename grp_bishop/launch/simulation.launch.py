import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node 

def generate_launch_description():

    tbot_sim_path = get_package_share_directory('tbot_sim')
    launch_tbot_file_dir = os.path.join(tbot_sim_path, 'launch')
    rviz2_file_path = '/home/bot/ros2_ws/larm-bishop/grp_bishop/rvizz_config/config_mapping.rviz'

    return LaunchDescription([
        #Launch la simulation du challenge1
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([launch_tbot_file_dir, '/challenge-2.launch.py']),
            ),

        #Execute les process SLAM
        ExecuteProcess(
            cmd=['ros2', 'launch', 'slam_toolbox', 'online_sync_launch.py', 'use_sim_time:=False']
        ),

        #Launch Rviz2
        ExecuteProcess(
            cmd=['rviz2', '-d', rviz2_file_path], 
                output='screen'),
        
        #Launch reactive_move
        Node(
            package='grp_bishop',
            executable='reactive_move',
            name='reactive',
            remappings=[
                ('/multi/cmd_nav','/cmd_vel')
            ]
        )
            
        ]
    )
