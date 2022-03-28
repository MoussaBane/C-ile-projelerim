#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *bane;
    bane = NULL;
   /* *bane=12;
    printf("%d\n",*bane);  NULL adresine deger atilamaz her zaman sifir kalir yani bir sabittir...
    */
    printf("bane pointerinin degeri: hex: %p  dec: %x\n\n",bane,bane);


    if(bane)
        printf("bane NULL degildir....");
    else
        printf("bane NULL'dur...");





    return 0;
}
