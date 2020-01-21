#include <stdio.h>
#include "fonctions.h"

int main()
{
    int testConnexion;
    int compteur = 0;
    int deconnecter;
    do
    {
        testConnexion = login();

        if (testConnexion == 1)
        {
            menu_global();
            if (connecte != 1)
            {
                break;
            }
        }
        else
        {
            printf("Desole motde passe ou nom d'utilisateur incorrect\n");
            compteur++;
        }

    } while (compteur < 3);
    return 0;
}