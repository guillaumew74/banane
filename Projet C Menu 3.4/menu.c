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
                    printf("patate\n");//croissant
                    break;

                case 2:
                    printf("tomate\n");//décroissant
                    break;

                default:
                    printf("Impossible\n");
                    break;
            }
            break;
        case 3:
            // lrechercher les données
            //afficheres données
            break;
        case 4:
            //moyenne de pouls sur une plage de temps
            break;
        case 5:
            //nombre de lignes de données utilisées en mémoire
            break;
        case 6:
            //Rechercher les max/min de pouls
            //Afficher les max/min de pouls
            //Afficher le temps associé
            break;
        case 7:
            printf("Au revoir !");
            break;
        default:
            printf("Impossible\n");
            break;
    }


}

