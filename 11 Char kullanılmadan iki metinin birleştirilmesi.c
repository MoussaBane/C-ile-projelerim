#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *metin1=(char *)malloc(100*sizeof(char));
    char *metin2=(char *)calloc(100,sizeof(char));

    printf("Ilk metin giriniz : ");
    gets(metin1);

    printf("\nIkinci metin giriniz: ");
    gets(metin2);

    int sizemetin1= strlen(metin1);
    int sizemetin2= strlen(metin2);

    metin1=(char *)realloc(metin1,(sizemetin1+1)*sizeof(char));
    metin2=(char *)realloc(metin2,(sizemetin2+1)*sizeof(char));

    char *metinbirlesim=(char *)malloc((sizemetin1+sizemetin2+1)*sizeof(char));

    strcpy(metinbirlesim,metin1);
    strcpy(metinbirlesim+sizemetin1,metin2);
    //strcat(metin1,metin2); "strcat kullanmak istersek"

    printf("\nmetin1: %s\nsizemetin1= %d\nm1ptr= %p\n",metin1,sizemetin1,metin1);
    printf("\nmetin2: %s\nsizemetin2= %d\nm2ptr= %p\n",metin2,sizemetin2,metin2);
    printf("\nmetinbilesim: %s\nsizemetin= %d\nmptr= %p\n",metinbirlesim,strlen(metinbirlesim),metinbirlesim);


    free(metin1);
    free(metin2);
    free(metinbirlesim);


    return 0;
}
