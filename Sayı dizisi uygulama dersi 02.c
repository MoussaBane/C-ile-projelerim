#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m1[2][3]={10,2,3,5,4,3}, m2[3][2]={1,2,3,4,5,6}, sm[2][2] ;
   int i,j,k;
   int T=0;
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
          for(k=0;k<3;k++)
          {
              T += m1[i][k]*m2[k][j];
              //m1[0][k]
              //m2[k][0]
          }
          sm[i][j]= T;
          T=0;
       }
   }

    int x,y;
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            printf("%4d",sm[x][y]);
        }
        printf("\n");
    }









    return 0;
}
