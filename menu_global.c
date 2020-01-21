#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

void menu_global()
{
    int choix;

    system("cls");
    printf("\t********** MENU PRINCIPAL **********\n");
    printf("\t\t-> 1. GESTION DES CLIENTS\n");
    printf("\t\t-> 2. GESTION DES COMPTES\n");
    printf("\t\t-> 3. QUITTER\n");

    printf("\t\t>> ");
    scanf("%d", &choix);

    do
    {
        switch (choix)
        {
        case 1:
            system("clear");
            menu_gestion_clients();
            break;

        case 2:
            printf("2 ok\n");
            break;

        case 3:
            printf("\t\tok merci\n");
            connecte = 0;
            break;

        default:
            printf("\t\tDesole choix innexistant !");
            break;
        }
    } while (choix != 3);
}