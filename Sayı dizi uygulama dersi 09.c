#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matris[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};


   printf("Sutun ortalamalari: \n\n");
   for(int i=0;i<3;i++)
   {
       float ort=0.0;
       for(int j=0;j<4;j++)
       {
           ort += matris[j][i];
       }
       printf("%.2f ",ort/4);
   }
   printf("\n\n\n");


   printf("Satir ortalamalari: \n\n");
   for(int i=0;i<4;i++)
   {
       float ort=0.0;
       for(int j=0;j<3;j++)
       {
           ort += matris[i][j];
       }
       printf("%.2f ",ort/3);
   }
   printf("\n\n\n");











    return 0;
}
