#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "menu.h"
#include "donnees.h"



void menu (int maxtab,int choix)
{

		printf("Bienvenue,ce programme permet d'analiser le fichier de relevés de pouls\n\n");
		printf("Veillez choisir une option:\n");
		printf("1)trier en fonction du temps(croissant)\n2)trier en fonction du temps(decroissant)\n");
		printf("3)trier en fonction du pouls(croissant)\n4)trier en fonction du pouls(decroissant)\n");
        printf("5)rechercher une valeur de pouls\n6)rechercher une valeur de temps\n");
        lirefichier(choix, maxtab);
}
