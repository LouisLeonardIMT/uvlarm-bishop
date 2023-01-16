import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node 

def generate_launch_description():

    rviz2_file_path = '/home/bot/ros2_ws/larm-bishop/grp_bishop/rvizz_config/config_tuto_sim.rviz'



    return LaunchDescription([
        ExecuteProcess(
            cmd=['ssh', '10.89.1.92'],
        ),
    
        ExecuteProcess(
            cmd=['bot'],
        ),

        ExecuteProcess(
            cmd=['rviz2', '-d', rviz2_file_path], 
                output='screen'),
        
        Node(
            package='teleop_twist_keyboard',
            executable='teleop_twist_keyboard',
            name='teleop',
            prefix='gnome-terminal -x',
            remappings=[
                ('/cmd_vel', '/multi/cmd_teleop')
            ]    
        )

        ]
    )