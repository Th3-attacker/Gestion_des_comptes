#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

void cree_compte(compte *cmp, client *c)
{
    //char last_compte[10] = strcpy(last_compte, get_last_num_compte());
    char last_compte;
    int new_compte = atoi(last_compte);
    new_compte++;
    set_last_num_compte(new_compte);
    strcpy(cmp->num, new_compte);

    char file_path[50];
    char dossier_client[50];

    strcpy(dossier_client, "comptes/");
    strcpy(file_path, strcat(dossier_client, new_compte));

    FILE *f;
    f = fopen(file_path, "w");
    fprintf(f, "%s\n%f\n%s",
            cmp->num,
            cmp->montant,
            c->nni);
    fclose(f);
}