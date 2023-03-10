# uvlarm-bishop

### Description :
Dépot de notre projet de l'UV LARM (Logiciels et Architecture pour la Robotique Mobile). Ce package dépend de mb-tbot6. Il faut s'assurer avant utilsation qu'il soit correctement installé sur la machine.

### Package :
grp_bishop

### Dépendances :
pkg_tbot

Créer votre workspace `mkdir` et cloner notre package à l'intérieur `clone` :  
`mkdir my_ws`  
`cd my_ws`  
Au besoin, utiliser le tutoriel ci-après https://ceri-num.gitbook.io/uv-larm/tuto.-01-kick-off/ros-basics pour installer le pkg-tbot (mb6-tbot) nécessaire.  
Puis cloner notre package dans votre workspace :  
`git clone https://github.com/LouisLeonardIMT/uvlarm-bishop`

### Auteurs :
Louis LEONARD et Mehdi ABBASSI

### Machines : 
Bishop et Bubo

### Vidéo de présentation :
https://www.youtube.com/watch?v=YinE02FuDrU

## Challenge 1 :
Le but du challenge 1 est de permettre au robot de se déplacer au sein de l'arena en évitant les obstacles. Il est demandé de réaliser d'abord cela dans une simulation (de part l'utilisation de gazebo), puis avec le robot réel.

Pour lancer la simulation :
`ros2 launch grp_bishop simulation.launch.py`
Ceci démarre gazebo, rviz2 et le déplacement du robot dans l'arena simulée.

Pour lancer le turtle bot :
`ros2 launch grp_bishop tbot.launch.py`
Ceci initialise le robot ainsi que le lidar. Le robot se déplace alors en évitant les obstacles.

Enfin, pour la visualisation sur un pc auxiliaire lié au premier pc : 
`ros2 launch grp_bishop visualize.launch.py`
Ceci démarre rviz2 ainsi qu'un nouveau terminal permettant de prendre le contrôle du robot si l'opérateur le souhaite.

## Challenge 2 :
Le but du challenge 2 est de permettre au robot de se déplacer au sein de l'arena en évitant les obstacles. Il doit également créer une carte par la méthode SLAM. Le robot avec l'aide de la caméra doit pouvoir détecter une bouteille. Il est demandé de réaliser d'abord cela dans une simulation (de part l'utilisation de gazebo), puis avec le robot réel.

Pour lancer la simulation :
`ros2 launch grp_bishop simulation.launch.py`
Ceci démarre gazebo, rviz2 et le déplacement du robot dans l'arena simulée.

Pour lancer le turtle bot :
`ros2 launch grp_bishop tbot.launch.py`
Ceci initialise le robot ainsi que le lidar et la caméra. Le robot se déplace alors en évitant les obstacles.

Enfin, pour la visualisation sur un pc auxiliaire lié au premier pc : 
`ros2 launch grp_bishop visualize.launch.py`
Ceci démarre rviz2 ainsi qu'un nouveau terminal permettant de prendre le contrôle du robot si l'opérateur le souhaite.

## Challenge 3 :
Le but du challenge 3 est identique au challenge 2, avec en plus le placement de la bouteille détectée sur la carte créée par la méthode SLAM.  
Cette partie du projet, inachevée, est une piste d'amélioration pour celles et ceux qui souhaitent reprendre le développement du projet.

## Autres pistes :
Il serait intéressant d'apporter une part d'aléatoire dans le programme de déplacement du robot afin de s'assurer qu'il explore l'entiereté de l'arena. (`reactive_move.py`)  
De plus, la détection ne se fait que sur les bouteilles de _Nuka Cola_. D'autres type de bouteilles pourraient être ajoutées au programme de détection au besoin (`realsense.py`)
