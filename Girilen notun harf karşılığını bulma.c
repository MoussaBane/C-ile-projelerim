#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrenci_notu;
    printf("Ogrenci notu giriniz= ");
    scanf("%d",ogrenci_notu);
    if(ogrenci_notu>=60 && ogrenci_notu<65){
           printf("\nDD");
        }
    else if(ogrenci_notu>=65 && ogrenci_notu<70){
        printf("\nDC");
    }
    else if (ogrenci_notu>=70 && ogrenci_notu<75){
        printf("\nCC");
    }
    else if(ogrenci_notu>=75 && ogrenci_notu<80){
        printf("\nCB");
    }
    else if(ogrenci_notu>=80 && ogrenci_notu<85){
        printf("\nBB");
    }
    else if(ogrenci_notu>=85 && ogrenci_notu<90){
        printf("\nBA");
    }
    else if(ogrenci_notu>=90 && ogrenci_notu<100){
        printf("\nAA");
    }
    else
        printf("Yanlis giris yaptiniz!!!");







    return 0;
}
