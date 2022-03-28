#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *Maxadres(double *,int );
int main()
{
    double *ptr;
    double dizi[20];
    int boyut=20,i;
    srand(time(0));

    for(i=0;i<20;i++){
        dizi[i]=rand()%100;
        printf("dizi[%d]=  %.02lf           dizi[%d]ptr=    %p\n",i,dizi[i],i,dizi+i);
    }

    printf("\n\n");

    ptr = Maxadres(dizi,boyut);
    printf("Dizinin en buyuk degeri= %.2lf\nOnun Adresi= %p\n",*ptr,ptr);

    return 0;
}
double *Maxadres(double *dizi,int boyut)
{
    double *indis;
    double enbuyuk=*dizi;
    for(int i=1;i<boyut;i++){
        if(*(dizi + i)> enbuyuk){
            enbuyuk= *(dizi + i);
            indis= dizi + i;
        }
    }
    return indis;

}
