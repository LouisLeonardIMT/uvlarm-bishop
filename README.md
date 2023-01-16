# uvlarm-bishop

### Description :
Dépot de notre projet de l'UV LARM (Logiciels et Architecture pour la Robotique mobile)

### Auteurs :
Louis LEONARD et Mehdi ABBASSI

### Machines : 
Bishop et Bubo

### Challenge 1 :
Le but du challenge 1 est de permettre au robot de se déplacer au sein de l'arena en évitant les obstacles. Il est demandé de réaliser d'abord cela dans une simulation (de part l'utilisation de gazebo), puis avec le robot réel.

Pour lancer la simulation :
`ros2 launch grp_bishop simulation.launch.py`
Ceci démarre gazebo, rvizz et le déplacement du robot dans l'arena.

Pour lancer le turtle bot :
`ros2 launch grp_bishop tbot.launch.py`
Ceci initialise le robot ainsi que le lidar. Le robot se déplace alors en évitant les obstacles.
