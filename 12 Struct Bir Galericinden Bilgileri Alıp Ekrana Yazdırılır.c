#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Kredi{
    float oran;
    int vade;
};
typedef struct Kredi ARACKREDI;

struct Arac{
    char markamodeli[20];
    double fiyati;
    int modelyili;
    float hizi;
    ARACKREDI kredibilgi;
};
typedef struct Arac ARABA;

int main()
{
    int aracsayisi;
    printf("Galerideki Arac Sayisi: ?");
    scanf("%d",&aracsayisi);

    ARABA *arabalar;
    arabalar=(ARABA *)malloc(aracsayisi*sizeof(ARABA));

    printf("*********************************Galeri Bilgileri Girisi*********************************\n");
    for(int i=0;i<aracsayisi;i++){
            getchar();
            printf("%d.Aracinin Bilgileri Gir: \n",i+1);
            printf("Marka_modeli: ");
            gets(arabalar[i].markamodeli);
            printf("Model_Yili: ");
            scanf("%d",&arabalar[i].modelyili);
            printf("Hizisi: ");
            scanf("%f",&arabalar[i].hizi);
            printf("Fiyati: ");
            scanf("%lf",&arabalar[i].fiyati);
    }
    srand(time(0));
    for(int i=0;i<aracsayisi;i++){
        arabalar[i].kredibilgi.oran=(rand()%3)+2+(float)(rand()%100)/100 ;//2.00<--->4.99
        arabalar[i].kredibilgi.vade=(rand()%9)+12;//12<--->20
    }

    printf("\n*********************************Raporlama*********************************\n");
    for(int i=0;i<aracsayisi;i++){
        printf("%d.Aracinin Bilgileri:\n",i+1);
        printf("Markamodeli: %s  Modelyili: %d  Hizisi: %.2f  Fiyati: %.2lf  Kredi_Orani: %.2f  Kredi_Vadi: %d\n\n",
               arabalar[i].markamodeli,arabalar[i].modelyili,arabalar[i].hizi,arabalar[i].fiyati,arabalar[i].kredibilgi.oran,arabalar[i].kredibilgi.vade);
    }

    return 0;
}
