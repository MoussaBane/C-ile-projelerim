#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenci{
    int no;
    char ad[21];
    char soyad[21];
    char cisiyet[11];
    int sinif;
    int genel_ortalama;

}ogr1,ogr2;

int main()
{
    strcpy(ogr1.ad,"Ahmet");
    strcpy(ogr2.ad,"Mehmet");
    ogr1.no= 154;
    ogr2.no=254;
    ogr1.sinif=1;
    ogr2.sinif=2;

    if(ogr1.sinif==ogr2.sinif){
        printf("%s ve %s ayni siniftalar.\n",ogr1.ad,ogr2.ad);
    }
    else
        printf("%s ve %s ayni sinifta deyiller.\n",ogr1.ad,ogr2.ad);

    return 0;
}
