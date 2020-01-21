#include <stdio.h>
#include <string.h>

int login()
{
    char default_username[50] = "admin";
    char default_password[50] = "admin";
    char username[50];
    char password[50];

    printf("\t***********************************************\n");
    printf("\t* BIENVENU AU GESTION DES   COMPTES BANQUAIRE *\n");
    printf("\t***********************************************\n\n");
    printf("\t\t@[username] : ");
    scanf("%s", username);
    printf("\t\t@[password] : ");
    scanf("%s", password);

    if (!strcmp(username, default_username) && !strcmp(password, default_password))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}