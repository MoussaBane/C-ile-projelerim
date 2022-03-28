#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c,baslangic,orta,son,n,aranan_deger,dizi[100];

  printf("\nDizinin eleman sayisini giriniz: ");
  scanf("%d",&n);

  for(c=0;c<n;c++)
  {
      printf("\nDizinin %d. elmanini giriniz: ",c);
      scanf("%d",&dizi[c]);
  }
  printf("\nAranacak degeri giriniz: ");
  scanf("%d",&aranan_deger);

  baslangic = 0;
  son = n - 1;
  orta=(baslangic+son)/2;

  while(baslangic<=son)
  {
      if(dizi[orta]<aranan_deger)
        baslangic=orta+1;
      else if(dizi[orta]==aranan_deger)
      {
          printf("\nAranan < %d > degeri dizinin %d. elemani olarak bulundu.\n",aranan_deger,orta);
          break;
      }
      else
        son = orta - 1;
        orta = (baslangic + son)/2;
  }
  if(baslangic>son)
    printf("\nAranan %d degeri bulunamadi.\n",aranan_deger);






    return 0;
}
