#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu() // Pour le chaoıx de niveau
{
    int choix;
    printf("1: entre 1-100.\n2: entre 1-1000.\n3: entre 1-10000.\n");
    printf("Choisissez un niveau: ");
    scanf("%d",&choix);
    if(choix >= 1 && choix <= 3)
        return choix;
    else
        printf("Erreur. Veuillez revoir votre choix...");
        return 0;


    }

int main ( int argc, char** argv )
{
    int nombreMystere, nombreEntre,couts=0,continueparti=1;
    int MAX, MIN = 1,choix;

    // Génération du nombre aléatoire

    srand(time(NULL));
    choix = menu();
    switch(choix){//En fonction du choix de l'utilisateur prendre une valeur maximal.
    case 1:
        MAX=100;
        break;
    case 2:
        MAX=1000;
        break;
    case 3:
        MAX=10000;
        break;
    default:
        printf("Une erreur s'est produite...");
        continueparti=0;

    }
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;//Varie en fonction de Max!

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
while(continueparti) {
        couts=0;
    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        couts++;

        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere a %d couts!!!\n\n",couts);
    } while (nombreEntre != nombreMystere);
    printf("Tapez 0 pour quitter et 1 pour continuer le jeu: \n\n");
    scanf("%d",&continueparti);
    }

    return 0;
}
