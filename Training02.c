#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 30

int main()
{
    int sirasiz[N],sirali[N];
    int i,j;
    srand(time(0));

    printf("Sirasiz halde: ");
    for(i=0;i<N;i++)
    {
        sirasiz[i]=rand();
        printf("%d ",sirasiz[i]);
    }
    printf("\n\n");

    printf("Sirali olarak: ");
    int enkucuk,kucuk_indis;
    for(i=0;i<N;i++)
    {
        enkucuk=INT_MAX;
        for(j=0;j<N;j++)
        {
            if(sirasiz[j]<enkucuk)
            {
                enkucuk=sirasiz[j];
                kucuk_indis=j;
            }
        }
        sirali[i]=enkucuk;
        sirasiz[kucuk_indis]=INT_MAX;
    }

    for(int x=0;x<N;x++)
    printf("%d ",sirali[x]);
    printf("\n\n");









    return 0;
}
