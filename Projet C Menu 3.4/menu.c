#include "menu.h"


int menu()
{
  	int choix1; //variable pour le 1er choix
  	int choix2; //variable pour le choix de la question 2
	printf("Que voulez-vous faire ?\n");
	printf("1) Afficher les donnees du fichier csv ?\n");
	printf("2) Afficher les donnees en ordre croissant / decroissant ?\n");
	printf("3) Rechercher et afficher les donnees pour un temps particulier ?\n");
	printf("4) Afficher la moyenne de pouls pour une plage de temps donnee ?\n");
	printf("5) Afficher le nombre de lignes de donnees actuellement en mémoire ?\n");
	printf("6) Recherher et afficher les max/min de pouls ?\n");
	printf("7) Quitter l'application ?\n");
	//Menu qui affiche les choix
    /*Le fichier.csv contient le pouls ainsi que le temps d'exécution du programme à chaque prise de pouls selon ce format pouls : temps */

    scanf("%i", &choix1);
    switch (choix1)
    {
        case 1:
            return choix1;
            break;
        case 2:
            printf("1) Voulez-vous un ordre croissant ?\n");
            printf("2) Voulez-vous un ordre decroissant ?\n");
            scanf("%i", &choix2);
            switch (choix2)
            {
                case 1:
                    //croissant
                    return 21;
                    break;

                case 2:
                    //décroissant
                    return 22;
                    break;

                default:
                    printf("Impossible\n");
                    break;
            }
            break;
        case 3:
            //rechercher les données
            //afficher les données
            return choix1;
            break;
        case 4:
            //moyenne de pouls sur une plage de temps
            return choix1;
            break;
        case 5:
            //nombre de lignes de données utilisées en mémoire
            return choix1;
            break;
        case 6:
            //Rechercher les max/min de pouls
            //Afficher les max/min de pouls
            //Afficher le temps associé
            return choix1;
            break;
        case 7:
            printf("Au revoir !\nFermeture du programme...");
            return choix1;
            break;
        default:
            printf("Erreur dans le choix de l'action\nFermeture du programme...");
            return 0;
            break;
    }


}

