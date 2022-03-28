#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0,e_s,i,ekstra;
    printf("Kac eleman gireceksin? ");
    scanf("%d",&e_s);

    int *dizi=(int *)malloc(e_s*sizeof(int));

    for(i=0;i<e_s;i++){
        printf("dizi[%d]= ",i);
        scanf("%d",dizi+i);
        toplam += *(dizi+i);
    }
    printf("\n\nToplam= %d.\n",toplam);

    printf("\nKac eleman eklemek istiyorsun? ");
    scanf("%d",&ekstra);

    dizi=(int *)realloc(dizi,(e_s+ekstra)*sizeof(int));

    for(i=e_s;i<e_s+ekstra;i++){
        printf("dizi[%d]= ",i);
        scanf("%d",dizi+i);
        toplam += *(dizi+i);
    }
    printf("\n\nYeni Toplam= %d\n\n",toplam);

    free(dizi);


    return 0;
}
