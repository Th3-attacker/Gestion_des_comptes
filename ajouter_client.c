#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

void ajouter_client()
{
    int nombre_client;
    system("cls");
    printf("Entrez le nombre de client a ajouter: ");
    scanf("%d", &nombre_client);
    system("cls");
    char reponse[5];

    for (int i = 0; i < nombre_client; i++)
    {
        client C;
        printf("Client %d [NNI]      : ", i + 1);
        scanf("%s", C.nni);

        printf("Client %d [PRENOM]   : ", i + 1);
        scanf("%s", C.prenom);

        printf("Client %d [NOM]      : ", i + 1);
        scanf("%s", C.nom);

        printf("Client %d [TEL]      : ", i + 1);
        scanf("%s", C.tel);

        printf("Client %d [PROFESSION]: ", i + 1);
        scanf("%s", C.profession);

        printf("Client %d [DATE_NAISSANCE] (j/m/a): ", i + 1);
        scanf("%s", C.date_naiss);

        compte cmp;

        printf("[MONTANT]: ");
        scanf("%f", &cmp.montant);

        printf("ENREGISTRE (o/n): ");
        scanf("%s", reponse);
        if (strcmp("o", reponse) == 0)
        {
            enregistre_client(&C);
            cree_compte(&cmp, &C);
        }
        else
        {
            continue;
        }
        system("cls");
    }
}
