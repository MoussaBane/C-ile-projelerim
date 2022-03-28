#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi,toplam=0;
  while(sayi!=0)
  {
      printf("Bir sayi giriniz: ");
      scanf("%d",&sayi);
      toplam += sayi;
  }
  printf("Toplam: %d",toplam);















   /* int girilen_sayi,toplam=0;
     while(girilen_sayi != 0)
    {
        printf("Bir sayi giriniz: ");
        scanf("%d",&girilen_sayi);
        toplam += girilen_sayi;
    }
      printf("Toplam: %d",toplam); */

    return 0;
}
