#include <stdio.h>
#include <stdlib.h>

double* maxAdr(double *a, int boyut);
double* minAdr(double *b, int uzunluk);
int main()
{
    double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
    int b=6;

    printf("Dizimizin Elemanlari , Elemanlarinin Indisleri ve adresleri:\n\n");
    for(int i=0;i<b;i++)
        printf("x[%d]=   %.2lf     &x[%d]=   %p\n",i,*(x+i),i,x+i);

    double *kucuk, *buyuk;
    kucuk= minAdr(x,b);
    buyuk= maxAdr(x,b);

    printf("\nDizinin en kucuk elemani: \n%.2lf    %p\n",*kucuk,kucuk);
    printf("\nDizinin en buyuk elemai: \n%.2lf     %p\n",*buyuk,buyuk);

    return 0;
}
double* minAdr(double *b, int uzunluk)
{
    double enkucuk= *b;
    double *enkucukptr=b;
    for(int i=1;i<uzunluk;i++){
        if(*(b+i)<enkucuk){
            enkucuk=*(b+i);
            enkucukptr=b+i;
        }
    }
    return enkucukptr;

}
double* maxAdr(double *a,int boyut)
{
    double enbuyuk=*a;
    double *enbuyukptr=a;
    for(int i=1;i<boyut;i++){
        if(*(a+i)>enbuyuk){
            enbuyuk=*(a+i);
            enbuyukptr=a+i;
        }
    }
    return enbuyukptr;
}
