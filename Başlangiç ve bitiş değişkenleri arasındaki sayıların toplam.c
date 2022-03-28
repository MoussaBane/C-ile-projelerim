#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,baslangic,son,toplam=0,carpim=1;
   printf("Baslangic sayini gir: ");
   scanf("%d",&baslangic);
   printf("Son sayini gir: ");
   scanf("%d",&son);

   for(i=baslangic;i<=son;i++)
   {
       toplam += i;
       carpim *= i;

   }
   printf("\n\nToplam= %d.\nCarpim= %d.\n",toplam,carpim);












   /*int i,baslangic,bitis,toplam=0;
   printf("Baslangic sayisini giriniz: ");
   scanf("%d",&baslangic);
   printf("Bitis sayisini giriniz: ");
   scanf("%d",&bitis);
   for(i=baslangic;i<=bitis;i++){
    toplam += i;
   }
   printf("Toplam= %d",toplam);*/





    return 0;
}
