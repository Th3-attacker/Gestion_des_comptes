#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

void get_last_num_compte()
{
    char last_compte[10];
    FILE *f;
    f = fopen(".cache/last_num_compte", "r");
    fscanf(f, "000%s", &last_compte);
    fclose(f);
    // return
    last_compte;
}

int set_last_num_compte(char last_compte[10])
{
    FILE *f;
    f = fopen(".cache/last_num_compte", "w");
    fprintf(f, "%s", last_compte);
    fclose(f);
    return last_compte;
}