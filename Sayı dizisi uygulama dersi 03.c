#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[6]={1,2,3,4,5,6};
   int aranan_dizi[]={2,3,4};
   int i,j;
   for(i=0;i<6;i++)
   {
       for(j=0;j<3;j++)
       {
           if(dizi[i]==aranan_dizi[j])
           {
                i++;
               continue;


           }
           else
           {
               break;
           }
       }
       if(j==3)
       {
           printf("Aranan dizi bulundu !\n");
           break;
       }

   }
   if(j!=3)
   {
       printf("Aranan dizi bulunamadi !\n");
   }






    return 0;
}
