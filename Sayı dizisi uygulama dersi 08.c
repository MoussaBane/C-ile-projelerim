#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

     int N,dizi[1000];
     float ort=0.0;
     float toplam=0.0;
     float standart=0.0;
     printf("N sayisini giriniz: ");
     scanf("%d",&N);

     if(N>1000 && N<=0)
        printf("N sayisi 1-1000 araliginda olmali!!!");
     else
     {
         for(int i=0;i<N;i++)
         {
             printf("dizi[%d]= ",i);
             scanf("%d",&dizi[i]);
             ort += dizi[i];
         }
         ort/=N;
         printf("Dizinin ortalamasi= %f\n",ort);

         for(int i=0;i<N;i++)
         {
             toplam += pow(dizi[i]-ort,2.0);
         }

         standart=sqrt(toplam/(N-1));
         printf("Girilen %d adet sayinin standart sapmasi %f'dir",N,standart);


    }






    return 0;
}
