#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 20

int main()
{
   int dizi[N];
   srand(time(0));

   int i;
   for(i=0;i<N;i++)
   {
       dizi[i]=rand();
       printf("%d  ",dizi[i]);
   }

   printf("\n\n");
   int enkucuk=INT_MAX,enbuyuk=INT_MIN;
   int kucuk_indis,buyuk_indis;
   for(i=0;i<N;i++)
   {
      if(dizi[i]<enkucuk)
      {
          enkucuk=dizi[i];
          kucuk_indis=i;
      }
      if(dizi[i]>enbuyuk)
      {
          enbuyuk=dizi[i];
          buyuk_indis=i;
      }

   }
   printf("Sayi1= %d, %d indisli en kucuk sayidir.\nSayi2= %d, %d indisli bu dizinin en buyuk sayidir.\n ",enkucuk,kucuk_indis,enbuyuk,buyuk_indis);








    return 0;
}
