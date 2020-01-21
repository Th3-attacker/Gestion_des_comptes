#if !defined(FONCTIONS)
#define FONCTIONS

typedef struct
{
    char nni[30];
    char num_compte[30];
    char nom[30];
    char prenom[30];
    char tel[30];
    char profession[30];
    char date_naiss[30];
} client;

typedef struct
{
    char num[30];
    float montant;
    char nni[30];
} compte;

int connecte;
int login();
void menu_global();
void menu_gestion_clients();
void ajouter_client();
void get_last_num_compte();
int set_last_num_compte(char last_compte[10]);
int enregistre_client(client *c);
void cree_compte(compte *cmp, client *cli);
#endif // FONCTIONS
