#include <stdio.h>
#include <stdlib.h>


struct ogrenci{
    int No;
    char Ad[21];
    char Soyad[21];
    char Cinsiyet[11]; //ERKEK||KADIN
    char FakulteBolum[50];
    float GenelOrtalama;
};

typedef struct ogrenci Ogrenci;

int main()
{
  Ogrenci Ogrenci_Bilgisi; //struct ogrenci Ogrenci_Bilgisi;
  printf("*********************** Veri Okuma ***********************\n\n");
  printf("Ogrencinin nosu: ");
  scanf("%d",&Ogrenci_Bilgisi.No);
  printf("Ogrencinin adi: ");
  scanf("%s",Ogrenci_Bilgisi.Ad);
  printf("Ogrencinin soyadi: ");
  scanf("%s",Ogrenci_Bilgisi.Soyad);
  printf("Ogrencinin cinsiyeti: ");
  scanf("%s",Ogrenci_Bilgisi.Cinsiyet);
  printf("Fakulte/Bolum: ");
  scanf("%s",Ogrenci_Bilgisi.FakulteBolum);
  printf("Ogrencinin genel ortalamasi: ");
  scanf("%f",&Ogrenci_Bilgisi.GenelOrtalama);

  printf("\n\n*********************** Veri Yazma(Ogrencinin Bilgileri) ***********************\n\n");
  printf("Ad: %s\nSoyad: %s\nNo: %d\nCinsiyet: %s\nFakulte/Bolum: %s\nGenelOrtalama: %.2f\n\n",
         Ogrenci_Bilgisi.Ad,
         Ogrenci_Bilgisi.Soyad,
         Ogrenci_Bilgisi.No,
         Ogrenci_Bilgisi.Cinsiyet,
         Ogrenci_Bilgisi.FakulteBolum,
         Ogrenci_Bilgisi.GenelOrtalama);


    return 0;
}
