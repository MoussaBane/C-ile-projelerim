#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int dizi[1000];
   int i,N;
   float ort=0.0,toplam=0.0;
   float standartsapma;
   printf("N sayisini giriniz: ");
   scanf("%d",&N);

   if(N>1000 || N<=0)
   {
   printf("N sayisi 1-1000 araliginda olmalidir!!!");

   }

   else
   {
    printf("%d adet sayi giriniz: \n",N);
    for(i=0;i<N;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
        ort += dizi[i];

    }
    printf("Ortalama= %.2f\n",ort/N);
    ort=ort/N;
    for(i=1;i<=N;i++)
    {
        toplam += pow(dizi[i]-ort,2);
    }
    printf("Toplam= %.2f\n",toplam);
    standartsapma=sqrt(pow(N-1,-1)*toplam);
    printf("Girdiginiz %d adet sayilarin Standarsapma sonucu:\nStandartsapma= %.2f\n\n",N,standartsapma);










   }








    return 0;
}
