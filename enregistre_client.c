#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

int enregistre_client(client *c)
{
    char file_path[50];
    char dossier_client[50];

    strcpy(dossier_client, "docs/");
    strcpy(file_path, strcat(dossier_client, c->nni));

    FILE *f;
    f = fopen(file_path, "w");
    fprintf(f, "%s\n%s\n%s\n%s\n%s\n%s",
            c->nni,
            c->prenom,
            c->nom,
            c->date_naiss,
            c->profession,
            c->tel);
    fclose(f);
}