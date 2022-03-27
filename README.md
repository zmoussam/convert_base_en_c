# convert_base_en_c
- Coder un programme capable de transférer un nombre d'une base connu A à une base B
- Utilisation de langage C
# Solution logique 
Le programme codé traite les nombres données par l'utilisateur
en suivant les étapes suivants :
- demande d'un nombre de l'utilisateur + sa base actuel .
- traitement de nombre taper par l'utilisateur ( vérifier si le nombre
appartient à sa base actuel ) .
- après le traitement le programme transfère le nombre à la base
décimal.
- demander a l'utilisateur la base B où on veut transférer le nombre
donné par l'utilisateur .
- transférer le nombre de la base décimal à la base B .
![Screenshot 2022-03-27 225354](https://user-images.githubusercontent.com/90983110/160300572-76982f7b-0433-4c95-ba60-f0e1f1105469.png)
# Script et fonctions utilisées 
- La fonction check_base :
     Puisque les bases qui sont valable et
    connues pour le programme sont les
    bases de 2 à 16 , il faut vérifier la
    disponibilité de la base dans le
    programme , la fonction retourne 0 ou 1
- La fonction chose_base :
     après la vérification de l'existence de la
    base dans le programme la fonction
    chose_base produit la base souhaité en
    utilisant une boucle for .
- Les fonctions check_range et is_valid :
     après la vérification de l'existence de la
    base il faut vérifier si le nombre donné
    par l'utilisateur existe vraiment dans sa
    base actuel . et cela se fait par les deux
    fonctions check_range et is_valid en
    utilisant des boucles for pour parcourir le
    nombre en question qui est sous forme
    d'une chaine des caractères .
- La fonction to_decimal :
     après la vérification de l'existence de la
    base et l'existence de nombre dans sa
    base , comme c'est identifier dans la
    solution logique en doit transférer le
    nombre à la base décimale.
 # Améliorations futures.
  Le programme codé est capable de transférer chaque nombre
d'une base A à une base B . mais il y'on a des petites failles qu'il faut
rectifié pour améliorer le programme :
exemple :
- si on ajoute un caractère au lieu d'un nombre dans la
sélection de la base B on aura un erreur 

