#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int choix;
    while(choix<1 || choix>4){
        printf("Bienvenue dans le resto Bane Et Freres!!!\nEt voici notre menu:\n");
        printf("1: Couscous avec boisson .\n2: Poulet avec salad.\n3:Zame avec la viande de chat.\n4:Woudjoula avec pain.\n");
        printf("S'il vous plait votre choix: ");
        scanf("%d",&choix);

    }
    return choix;
}

int main()
{
    switch(menu()){
    case 1:
        printf("1: Couscous avec boisson .\n");
        break;
    case 2:
        printf("2:Poulet avec salade .\n");
        break;
    case 3:
        printf("3: Zame avec la viande de chat.\n");
        break;
    case 4:
        printf("4: Woudjoula avec pain.\n");
        break;


    }

    return 0;
}
