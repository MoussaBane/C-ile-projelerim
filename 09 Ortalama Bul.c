#include <stdio.h>
#include <stdlib.h>


float ortalamabul(float *dizi, int n);
int main()
{
    float bane[5]={10,20,30,40,50};
    printf("Dizinin elemanlarin ortalamasi: %.2f\n\n",ortalamabul(bane,5));

    return 0;
}
float ortalamabul(float dizi[], int n)
{
    float *diziptr=dizi; //&dizi[0]=dizi
    float toplam=0.0;
    for(int i=0;i<n;i++)
        toplam += *(diziptr+i);

    return toplam/n;
}
