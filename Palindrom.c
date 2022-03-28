#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   char dizi[10];
   printf("10 elemanli bir karakter giriniz: ");
   for(i=0;i<10;i++){
      scanf("%c",&dizi[i]);

      }

   for(i=0;i<5;i++){
    if(dizi[i]!=dizi[9-i])
        break;
   }
   printf("%d ",(i==5));






    return 0;
}
