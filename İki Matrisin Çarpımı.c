#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3]={5,7,9, 0,3,0, 7,5,1};
   int b[3][3]={3,3,1, 2,1,3, 1,0,0};
   int c[3][3]={};
   int i,j,k,toplam;

   printf("C Matrisi: \n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(toplam=0,k=0;k<3;k++)
            toplam += a[i][k]*b[k][j];
           c[i][j]=toplam;
           printf("%4d",c[i][j]);
       }
       printf("\n");
   }









    return 0;
}
