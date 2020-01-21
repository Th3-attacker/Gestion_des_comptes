#include <stdio.h>
#include <string.h>
#include "fonctions.h"

void menu_gestion_clients()
{
    int choix;

    printf("\t********** MENU PRINCIPAL **********\n");
    printf("\t\t-> 1. AJOUTER CLIENT\n");
    printf("\t\t-> 2. MODIFIER CLIENT\n");
    printf("\t\t-> 3. SUPPRIMER CLIENT\n");
    printf("\t\t-> 4. RECHERCHE CLIENT\n");
    printf("\t\t-> 5. RETOUR\n");

    printf("\t\t>> ");
    scanf("%d", &choix);

    do
    {
        switch (choix)
        {
        case 1:
            ajouter_client();
            break;

        case 2:
            printf("2 ok\n");
            break;

        case 3:
            printf("\t\tok merci\n");
            connecte = 0;
            break;

        case 4:
            printf("\t\tok merci\n");
            connecte = 0;
            break;

        case 5:
            break;

        default:
            printf("\t\tDesole choix innexistant !");
            break;
        }
    } while (choix != 5);
}