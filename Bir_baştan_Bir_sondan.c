#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,i;
   int dizi[101];
   printf("1-100 araliginda bir cift sayisi giriniz: ");
   scanf("%d",&N);
   if((N>100||N<=0) || (N%2!=0)){
        printf("Yanlis giris!!!");
        }
   else{
        printf("%d adet sayi giriniz.\n",N);
   for(i=0;i<N;i++)
        scanf("%d ",&dizi[i]);
   for(i=0;i<N/2;i++){
        printf("%d  %d ",dizi[i],dizi[N-1-i]);
    }

   }






    return 0;
}
