#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

void ouvrirFichier(int choix)
{
    FILE *f = NULL;
    f = fopen("C:/Users/Corentin/Desktop/Cesi EXIA/Projet/Projet n°1/Partie_3.2_arduino_fini/param.h","w+");
    verif(f, choix);
}

void verif(FILE *f, int choix)
{
    if (f == NULL)
    {
        printf("Le programme ne s'ouvre pas !");
        fclose(f);
    }
    else if (f != NULL)
    {
        printf("Le programme s'est ouvert correctement !");
        ecrire(choix, f);
    }
}

void ecrire(int choix, FILE *f)
{
    fprintf(f, "int choix = %d;", choix);
    fclose(f);
}
