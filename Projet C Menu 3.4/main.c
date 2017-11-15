#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "actions.h"
#include "donnees.h"

int main(int argc, char const *argv[])
{
    int choixMenu = 0;
    choixMenu = menu();

    switch (choixMenu)
    {
        case 1:
            printf("OMG");
            break;
        case 21:
            printf("OMG2");
            break;
        case 22:
            printf("OMG3");
            break;
        case 3:
            printf("OMG4");
            break;

        case 4:
            printf("OMG5");
            break;

        case 5:
            printf("OMG6");
            break;

        case 6:
            printf("OMG7");
            break;
    }

}
