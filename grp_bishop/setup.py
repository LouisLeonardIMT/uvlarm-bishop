from setuptools import setup
import os
from glob import glob

package_name = 'grp_bishop'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='bot',
    maintainer_email='bot@mb6.imt-nord-europe.fr',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'reactive_move = grp_bishop.reactive_move:move',
            'move_node = grp_bishop.move_node:main',
            'realsense =  grp_bishop.realsense:process_img',
            'bouteille_detect = grp_bishop.bouteille_detect:main'
        ],
    },
)
