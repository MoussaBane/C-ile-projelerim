#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ogr1Not[3],ogr2Not[3],ogr3Not[3];
  int i,j;

  for(i=0;i<3;i++)
  {
      printf("1. Ogrencinin %d. notunu giriniz: ",i+1);
      scanf("%d",&ogr1Not[i]);
      printf("2. Ogrencinin %d. notunu giriniz: ",i+1);
      scanf("%d",&ogr2Not[i]);
      printf("3. Ogrencinin %d. notunu giriniz: ",i+1);
      scanf("%d",&ogr3Not[i]);
  }
  int cikti1 = ogr1Not[i] + ogr2Not[i] + ogr3Not[i];
  printf("Ekran ciktisi 1: %d\n\n",cikti1);

  for(i=0;i<3;i++)
  {
      printf("%d. sinav ortalamasi: %d\n",i+1,(ogr1Not[i]+ogr2Not[i]+ogr3Not[i])/3);
  }








    return 0;
}
