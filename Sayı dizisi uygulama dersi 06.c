#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 20

int main()
{
    int dizi[N],i;
    srand(time(0));

    for(i=0;i<N;i++)
    {
        dizi[i]=rand();
        printf("%d  ",dizi[i]);
    }
    printf("\n\n\n");

    int enbuyuk,enkucuk,kucuk_indis,buyuk_indis;
    enkucuk=INT_MAX;
    enbuyuk=INT_MIN;

    for(i=0;i<N;i++)
    {
       if(dizi[i]<enkucuk)
        {
            dizi[i]=enkucuk;
            kucuk_indis=i;

        }
       if(dizi[i]>enbuyuk)
        {
            dizi[i]=enbuyuk;
            buyuk_indis=i;
        }
    }
    printf("Dizinin En Kucuk Sayisi: %d.\nDizinin En Buyuk Sayisi: %d.\n",enkucuk,enbuyuk);
    printf("Kucuk Indis: %d. Buyuk Indis: %d.\n");
















    return 0;
}
