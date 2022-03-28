#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Kredi{
    float oran;
    int vade;
};
typedef struct Kredi ARACKREDI;

struct Arac{
    char markamodel[21];
    int modelyili;
    double fiyati;
    float km;
    ARACKREDI kredibilgi;
};

typedef struct Arac ARABA;

int main()
{
    int aracsayisi;
    char modelleri[3][21]={"Xmarka--Ymodeli","Amarka--Bmodeli","Cmarka--Bmodeli"};
    srand(time(0));

    printf("Galerimizde Kac Aracin Bilgileri Istiyorsunuz: ");
    scanf("%d",&aracsayisi);

    ARABA *arabalar=(ARABA *)malloc(aracsayisi*sizeof(ARABA));

    for(int i=0;i<aracsayisi;i++){
        arabalar[i].fiyati=(rand()%50001)+10000 + (double)(rand()%100)/100;  //10000.00<-->50000.99
        arabalar[i].km=(rand()%2001)+1000.0+(float)(rand()%100)/100;  //1000.00<-->2000.99
        arabalar[i].modelyili=(rand()%27)+1995; //1995<-->2021
        strcpy(arabalar[i].markamodel,modelleri[rand()%3]);
        arabalar[i].kredibilgi.oran=(rand()%3)+2+(float)(rand()%100)/100 ;//2.00<--->4.99
        arabalar[i].kredibilgi.vade=(rand()%9)+12;//12<--->20
    }

    printf("*****************************Galeri Bilgileri*****************************\n");
    for(int i=0;i<aracsayisi;i++){
        printf("%d. Araba bilgileri: \n",i+1);
        printf("Markamodel: %s.  Hizisi: %.2f  Model_Yili: %d  Fiyati: %.2lf  Kredi_Orani: %.2f  Kredi_Vadi: %d\n\n",
               arabalar[i].markamodel,arabalar[i].km,arabalar[i].modelyili,arabalar[i].fiyati,arabalar[i].kredibilgi.oran,arabalar[i].kredibilgi.vade);
    }


    return 0;
}
