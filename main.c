/*
Un espion a été démasqué dans la ville où vous vous trouvez. Son interrogatoire n'a pas été très fructueux : la seule chose que vous savez, c'est qu'il espionnait les savants de l'université, une puissance étrangère étant intéressée par leurs recherches. Vous vous rendez donc à l'université pour discuter avec les chercheurs mais à peine arrivé, vous êtes recruté comme assistant par le laboratoire d'étude du comportement humain.

Celui-ci réalise une expérience consistant à demander à plusieurs personnes de placer chacune un jeton sur une table contenant des zones de différentes couleurs. Les chercheurs souhaitent ainsi étudier si le choix de la zone où une personne place son jeton est lié à la couleur des vêtements qu'elle porte.

Ce que doit faire votre programme :
Sur une table est placée une feuille de papier rectangulaire de 90 cm de large et 70 cm de haut, composée de zones de différentes couleurs, comme le décrit la figure ci-dessous. Un certain nombre de personnes placent l'une après l'autre un jeton où elles le souhaitent sur la table, à l'exception des frontières entre les différentes zones.


On vous donne en entrée le nombre de jetons qui ont été déposés, puis, pour chaque jeton, ses coordonnées sur la feuille par rapport à l'origine en haut à gauche, sous la forme d'une abscisse et d'une ordonnée entre −1 000 et 1 000.

Votre programme devra qualifier chaque jeton avec l'un des textes suivants, en fonction de la couleur sur laquelle il se trouve :

« En dehors de la feuille »
« Dans une zone jaune »
« Dans une zone bleue »
« Dans une zone rouge »
Essayez d'écrire votre programme de sorte qu'il y ait au maximum une condition par possibilité de texte affiché.

EXAMPLE

input:
4
16
12
30
22
64
62
-5
86

output:
Dans une zone bleue
Dans une zone jaune
Dans une zone rouge
En dehors de la feuille

COMMENTS
Dans l'exemple, on a 4 jetons, de coordonnées (16 ; 12), (30 ; 22), (64 ; 62) et (-5 ; 86).
 */

#include <stdio.h>

int main() {
    int nbJetons, x, y, i;

    printf("Veuillez saisir le nombre de jetons : \n");
    scanf("%d", &nbJetons);

    for (i = 0; i < nbJetons; i++) {
        printf("Veuillez saisir les coordonnées x et y du jeton : \n");
        scanf("%d %d", &x, &y);

        if (x < 0 || x > 90 || y < 0 || y > 70) {
            printf("En dehors de la feuille\n");
        } else if (y > 60 && ((x > 15 && x < 45) || (x > 60 && x < 85))) {
            printf("Dans une zone rouge\n");
        } else if (x > 10 && x < 85 && y > 10 && y < 55 && !(x > 25 && x < 50 && y > 20 && y < 45)) {
            printf("Dans une zone bleue\n");
        } else {
            printf("Dans une zone jaune\n");
        }
    }

    return 0;
}
