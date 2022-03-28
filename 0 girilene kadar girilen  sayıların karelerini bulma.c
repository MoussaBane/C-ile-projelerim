#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi,toplam=0,kare;
   do
   {
       printf("Bir sayi giriniz: ");
       scanf("%d",&sayi);
       kare= sayi*sayi;
       printf("Sayinin karesi: %d\n",kare);
       toplam += kare;


   }while(sayi!=0);

   printf("Karelerin toplami: %d",toplam);



















   /*int sayi,kare, toplam=0;
   do{
        printf("Bir sayi giriniz: ");
        scanf("%d",&sayi);
        kare = sayi*sayi;
        printf("Sayinin karesi= %d\n",kare);
        toplam += kare;


    }while(sayi != 0);
    printf("Toplam= %d",toplam);*/
    return 0;
}
