#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

void ajouter_client()
{
    int nombre_client;

    printf("Entrez le nombre de client a ajouter: ");
    scanf("%d", &nombre_client);

    client C[nombre_client];

    char reponse[5];

    for (int i = 0; i < nombre_client; i++)
    {
        printf("[NNI]      : ");
        scanf("%s", C[i].nni);

        printf("[PRENOM]   : ");
        scanf("%s", C[i].prenom);

        printf("[NOM]      : ");
        scanf("%s", C[i].nom);

        printf("[TEL]      : ");
        scanf("%s", C[i].tel);

        printf("[PROFESSION]: ");
        scanf("%s", C[i].profession);

        printf("[DATE_NAISSANCE] (j/m/a): ");
        scanf("%s", C[i].date_naiss);

        compte cmp;

        printf("[MONTANT]: ");
        scanf("%f", &cmp.montant);

        printf("ENREGISTRE (o/n): ");
        scanf("%s", reponse);

        if (strcmp("o", reponse) == 0)
        {
            enregistre_client(C);
            cree_compte(&cmp, C);
        }
        else
        {
            continue;
        }
    }
}