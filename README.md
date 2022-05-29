# Endless runner 2D : Star Renard

# Comment obtenir notre jeu

- Afin de pouvoir obtenir notre jeu vous devez pour commencer récupérer les fichiers sur git :

````
git clone https://rendu-git.etna-alternance.net/module-9050/activity-49385/group-978939 Star Renard
````

- Quand cela est fait vous pouvez alors vous rendre dans le dossier obtenu et effectuer un "make".

- Vous avez à disposition une petite liste de commande afin de supprimer certain fichier et de les recréer :
> make fclean : est là afin de supprimer tous les fichiers de compilation.

> make re : est là afin de supprimer tous les fichiers de compilation et de les recréer.

Point important : Avant de pouvoir exécuter le makefile vérifier au préalable si tous les packages nécessaires sont installés : SDL2 et SDL2_image.

- Pour lancer le jeu il vous suffira de faire d'exécuter la commande suivante après avoir effectué un "make" : 

>./Runner

# Fonctionnement et prévisualisation du jeu :

- Voici un aperçu du vaisseau que le joueur va utiliser :

![](https://cdn.discordapp.com/attachments/920687736049008640/979758572135120926/vaiseau.png)

- Et voici les différent ennemie/obstacles que le joueur vas pouvoir rencontrer tout au long de sa partie : 

![](https://cdn.discordapp.com/attachments/920687736049008640/980465961742270514/pixil-frame-0.png)

![](https://media.discordapp.net/attachments/920687736049008640/980476544453578753/pixil-frame-0_1.png)

![](https://media.discordapp.net/attachments/920687736049008640/980476544222887976/pixil-frame-0_2.png)

- Afin de pouvoir jouer et interagir dans le jeu il vous suffira d'utiliser les flèche directionnel de votre clavier : Haut pour aller en haut, Bas pour aller en bas, Gauche pour aller à gauche avec une vitesse lente et Droite pour aller à droite avec une vitesse rapide.
