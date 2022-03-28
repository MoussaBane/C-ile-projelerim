#include <stdio.h>
#include <stdlib.h>

int main()
{

   char sirasiz[10][50+1];
   char sirali[10][50+1];

   printf("10 adet kelime girin: \n");
   for(int i=0;i<10;i++)
     gets(sirasiz[i]);
   printf("\n\n");

   printf("Kelimelerin alfabetik sirali:\n");

   int enkucukindis;
   char enkucukkelime[51];
   enkucukkelime[50]='\0';

   for(int i=0;i<10;i++)
   {//Dýs Döngü
       enkucukindis=-1;

       for(int k=0;k<50;k++)
       {//Yardým Döngü
           enkucukkelime[k]='{';
       }

       for(int j=0;j<10;j++)
       {//Ýç Döngü
           //sýrasýz[j] ile enkucukkelime ile kýyaslanacak
           if(strcmp(sirasiz[j],enkucukkelime)<0)
           {
               strcpy(enkucukkelime,sirasiz[j]);
               enkucukindis=j;
           }
       }

       for(int k=0;k<50;k++)
       sirasiz[enkucukindis][k]='{';

       strcpy(sirali[i],enkucukkelime);
   }

   for(int i=0;i<10;i++)
     puts(sirali[i]);











    return 0;
}
