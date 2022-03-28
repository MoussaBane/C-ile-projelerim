#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dizi[4][3]={1,2,3, 4,5,6, 7,8,9, 10,11,12};
  int i,j;
  for(i=0;i<4;i++)
  {
      for(j=0;j<3;j++)
      printf("%4d",dizi[i][j]);

      printf("\n");
  }
  printf("\n\n");
  printf("Satirlarin ortalamalari:\n");
  int toplam=0;
  float ort=0.0;
  for(i=0;i<4;i++)
  {
      toplam=0;
      for(j=0;j<3;j++)
      {
          toplam += dizi[i][j];
      }
      ort= toplam/3;
      printf("Ortsartir%d= %.2f\n",i,ort);
  }
  printf("\n\n");

    printf("Sutun ortalamalari:\n");


  for(i=0;i<3;i++)
  {
      toplam=0;
      for(j=0;j<4;j++)
      {
          toplam += dizi[i][j];
      }
      ort= toplam/4;
      printf("Ortsutun%d= %.2f\n",i,ort);
  }








    return 0;
}
