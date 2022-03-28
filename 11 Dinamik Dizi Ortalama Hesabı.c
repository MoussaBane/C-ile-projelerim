#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dizi;
    int n,toplam=0;

    printf("Dizinin eleman sayisi giriniz: ");
    scanf("%d",&n);

    dizi=(int *)malloc(n*sizeof(int));
    //dizi=(int *)calloc(n,sizeof(int));

    printf("Dizinin elemanlarini giriniz: \n");
    for(int i=0;i<n;i++){
        printf("dizi[%d]= ",i);
        scanf("%d",dizi+i);  //dizi+i=&dizi[i]
        toplam += *(dizi+i);
    }

    printf("\nDizi elemanlarin toplami= %d\n",toplam);
    printf("Dizinin elemanlarinin ortalamasi= %.2f\n",(float)toplam/n);

    free(dizi);

    return 0;
}
