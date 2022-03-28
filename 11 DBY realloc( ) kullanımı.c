#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=10;
    //Initial memory allocation...
    char *metin=(char *)malloc(n*sizeof(char));
    strcpy(metin,"Algoritma");
    //puts(metin);
    printf("metin= %s.     Adress-----> %p\n\n",metin,metin);

    //Reallocating memory...
    metin=(char *)realloc(metin,25*sizeof(char));

    strcat(metin," ve Programlama");

    //puts(metin);
    printf("metin= %s.     Adress-----> %p\n\n",metin,metin);

    free(metin);


    return 0;
}
