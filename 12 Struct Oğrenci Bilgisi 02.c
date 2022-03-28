#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Ad[21];
    char Soyad[21];
    char Cinsiyet[11];
    char FakulteBolum[20];
    int No;
    int Sinif;
    float GenelOrtalama;

}Ogrenci;

int main()
{
    int ogrenci_sayisi,i;
    printf("Ogrenci sayisi: ");
    scanf("%d",&ogrenci_sayisi);

    getchar();//Ayni programda scanf() ve gets() kullanýldýðý için!!!

    Ogrenci *ogrenciler=(Ogrenci *)malloc(ogrenci_sayisi*sizeof(Ogrenci));

    for(i=0;i<ogrenci_sayisi;i++){
        printf("%d.Ogrencinin adi: ",i+1);
        gets(ogrenciler[i].Ad);
        printf("%d.Ogrencinin soyadi: ",i+1);
        gets(ogrenciler[i].Soyad);
        printf("%d.Ogrencinin cinsiyeti: ",i+1);
        gets(ogrenciler[i].Cinsiyet);
        printf("%d.Ogrencinin fakultesi/bolumu: ",i+1);
        gets(ogrenciler[i].FakulteBolum);
        printf("%d.Ogrencinin nosu: ",i+1);
        scanf("%d",&ogrenciler[i].No);
        printf("%d.Ogrencinin sinifi: ",i+1);
        scanf("%d",&ogrenciler[i].Sinif);
        printf("%d.Ogrencinin genel ortalamasi: ",i+1);
        scanf("%f",&ogrenciler[i].GenelOrtalama);

        getchar();//Ayni programda scanf() ve gets() kullanýldýðý için!!!

    }

    printf("\n\n************************Ogrencilerin Bilgileri(Raporlama)************************\n\n");

    for(i=0;i<ogrenci_sayisi;i++){
            printf("%d.Ogrencinin Bilgileri\n",i+1);
            printf("Ad: %s\n",ogrenciler[i].Ad);
            printf("Soyad: %s\n",ogrenciler[i].Soyad);
            printf("Cinsiyet: %s\n",ogrenciler[i].Cinsiyet);
            printf("Fakulte/Bolum: %s\n",ogrenciler[i].FakulteBolum);
            printf("No: %d\n",ogrenciler[i].No);
            printf("Sinif: %d\n",ogrenciler[i].Sinif);
            printf("Genel Ortalamasi: %.2f\n",ogrenciler[i].GenelOrtalama);

    }

    return 0;
}
