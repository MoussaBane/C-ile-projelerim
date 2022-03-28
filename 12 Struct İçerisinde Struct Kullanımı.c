#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float vize_notu[2];
    float quiz_notu[2];
    float final_notu;
}OgrenciNot;

typedef struct {
    char telefon[21];
    char email[21];
}Iletisim;

typedef struct {
    int no;
    char ad[21];
    char soyad[21];
    char cinsiyet[11];
    Iletisim ogriletisim;
    OgrenciNot ogrnot;
}Ogrenci;

int main()
{
    Ogrenci OgrenciBilgileri;
    OgrenciBilgileri.no=154;
    strcpy(OgrenciBilgileri.ad,"Ceylan");
    strcpy(OgrenciBilgileri.soyad,"Can");
    strcpy(OgrenciBilgileri.cinsiyet,"Kadin"); //sprintf(OgrenciBilgileri.cinsiyet,"%s","Kadin");
    strcpy(OgrenciBilgileri.ogriletisim.telefon,"05446887545");
    strcpy(OgrenciBilgileri.ogriletisim.email,"ceylan.can@2021.com");
    OgrenciBilgileri.ogrnot.vize_notu[0]=98.75;
    OgrenciBilgileri.ogrnot.vize_notu[1]=95.54;
    OgrenciBilgileri.ogrnot.quiz_notu[0]=58.00;
    OgrenciBilgileri.ogrnot.quiz_notu[1]=78.95;
    OgrenciBilgileri.ogrnot.final_notu=98.75;

    printf("\n***************************Ogrenci Bilgileri***************************\n");
    printf("Ad: %s\nSoyad: %s\nCinsiyet: %s\nTel: %s\nEposta: %s\nNo: %d\n",
           OgrenciBilgileri.ad,OgrenciBilgileri.soyad,OgrenciBilgileri.cinsiyet,OgrenciBilgileri.ogriletisim.telefon,
           OgrenciBilgileri.ogriletisim.email,OgrenciBilgileri.no);
    printf("Ogrecinin Basari Notlari:\n");
    printf("Vize_Not1= %.2f\nVize_Not2= %.2f\nQuiz_Not1= %.2f\nQuiz_Not2= %.2f\nFinal_Notu= %.2f\n",
           OgrenciBilgileri.ogrnot.vize_notu[0],OgrenciBilgileri.ogrnot.vize_notu[1],
           OgrenciBilgileri.ogrnot.quiz_notu[0],OgrenciBilgileri.ogrnot.quiz_notu[1],
           OgrenciBilgileri.ogrnot.final_notu);


    return 0;
}
