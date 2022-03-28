#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m1[2][4]={1,2,3,4,  5,6,7,8},m2[4][3]={1,2,3,  4,5,6,  7,8,9,  10,11,12};
  int m3[2][3],i,j,k;
  int toplam=0;

  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
      {
        for(k=0;k<4;k++)
        {
            toplam += m1[i][k]*m2[k][j];
        }
        m3[i][j]=toplam;
        toplam=0;
      }

  }
  int x,y;
  for(x=0;x<2;x++)
  {
      for(y=0;y<3;y++)
      {
          printf("%4d ",m3[x][y]);
      }
      printf("\n");
  }













    return 0;
}
