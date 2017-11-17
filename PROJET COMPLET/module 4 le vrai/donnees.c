#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "donnees.h"
#include "action.h"
#include "menu.h"

void lirefichier(int maxtab, int choix)
{
    scanf("%d", &choix);
    FILE* fichier = NULL;
    int i;
    char tableau[100][28];
    int battement[20];
    int temps[20] ;


    maxtab=((sizeof pouls)/8);


    fichier = fopen("C:/Users/Corentin/Desktop/Cesi EXIA/Projet/Projet n°1/Arduino/programme_M1/sketch_171115a/Battements.csv", "r");

    if (fichier != NULL)
    {
       for(i = 0; i < maxtab ;i++)
       {



       fscanf(fichier, "%s", tableau[i]);

       battement[i]=atoi(strtok(tableau[i],";"));
       temps[i]=atoi(strtok(NULL,";"));
       //attencion char to int atoi

        personne pers = {temps[i],battement[i]};
        pouls[i] = pers;
      }


    }
    switch(choix)
        {
         case 1:
             TRIABULLEStempscroissant(pouls,maxtab);

            break;
         case 2:
             TRIABULLEStempsDecroissant(pouls,maxtab);
            break;
         case 3:
             TRIABULLESbattementcroissant(pouls,maxtab);

            break;
         case 4:
             TRIABULLESbattementDecroissant(pouls,maxtab);
            break;

         case 5:
             TRIABULLESbattementcroissant(pouls,maxtab);
             recherchedichotomiquepouls(maxtab,pouls);

            break;
         case 6:
             TRIABULLEStempscroissant(pouls,maxtab);
             recherchedichotomiquetemps(maxtab,pouls);
            break;
        }
        fclose(fichier);
}




