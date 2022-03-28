#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ogrNotlar[3][3];
  int i,j;

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("%d. ogrencinin %d. notunu giriniz: ",i+1,j+1);
          scanf("%d",&ogrNotlar[i][j]);
      }
  }
   int cikti1= ogrNotlar[0][0]+ogrNotlar[1][1]+ogrNotlar[2][2];
   printf("Ekran ciktisi 1: %d\n\n",cikti1);

   for(i=0;i<3;i++)
   {
       printf("%d. sinav ortalamasi: %d\n",i+1,(ogrNotlar[0][i]+ogrNotlar[1][i]+ogrNotlar[2][i])/3);
   }








    return 0;
}
