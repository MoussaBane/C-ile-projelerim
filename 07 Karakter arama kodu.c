#include <stdio.h>
#include <stdlib.h>

int main()
{
   char metin[100];
   int poz[100-1];
   char aranan;
   int sayac=0;

   printf("Metini giriniz: ");
   gets(metin);

   printf("Aranan karakter giriniz: ");
   scanf("%c",&aranan);

   for(int i=0;i<strlen(metin);i++)
   {
       if(aranan==metin[i])
       {
           poz[sayac++]=i;
       }
   }

   printf("Toplam bulunan harf sayisi: %d\n",sayac);

   for(int c=0;c<sayac;c++)
    printf("Cumledeki pozisyon: %d\n",poz[c]);












    return 0;
}
