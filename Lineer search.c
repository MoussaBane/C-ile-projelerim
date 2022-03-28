#include <stdio.h>
#include <stdlib.h>

int main()
{
   int aranacak_dizi[100];
   int aranan_bilgi,i;
   int bulunan_indis = -1;
   //Dizi elemanlarý otomatik olarak cift sayilarla dolduruyor.
   for(i=0;i<100;i++)
   {
       aranacak_dizi[i]=i*2;
   }
   //Aranac bilgi okunuyor.
   printf("Aranac bilgiyi giriniz: ");
   scanf("%d",&aranan_bilgi);
   //Dogrusal arama.
   for(i=0;i<100;i++)
   {
       if(aranan_bilgi==aranacak_dizi[i])
       {
           bulunan_indis=i;
           printf("Aranan bilgi %d ---> %d. indiste bulundu...\n",aranan_bilgi,bulunan_indis);
           break;
       }
   }
   if(bulunan_indis== -1)
    printf("Aranan bilgi %d bulunamadi\n",aranan_bilgi);







    return 0;
}
