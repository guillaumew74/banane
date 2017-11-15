#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.C"

void menu()
{
    int choix = 0;
    printf("Veulliez choisir votre paramètrage de LED : \n");
    printf("    1) Allumer (clignotant)\n");
    printf("    2) Allumer 1 LED sur 2\n");
    printf("    3) Allumer 1 LED sur 2 (autres LEDS)\n");
    printf("    4) Allumer 1 LED sur 3\n");
    printf("    5) Allumer 1 LED sur 4\n");
    printf("    6) Allumer 1 LED sur 5\n");
    printf("    7) Allumer 1 LED sur 6\n");
    printf("    8) Allumer 1 LED sur 7\n");
    printf("    9) Allumer 1 LED sur 8\n");
    printf("    10) Allumer 1 LED sur 9\n");
    printf("    11) Allumer 1 LED sur 10\n");
    printf("    12) Allumer en mode chenille\n");
    scanf("%d", &choix);
    ouvrirFichier(choix);
}
