#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,toplam=0,cikar;
    int dizi[100];
    printf("N sayisi giriniz: ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("%d.sayi gir: ",i+1);
        scanf("%d",&dizi[i]);
    }
    for(i=1;i<N;i++){
        cikar=dizi[i]-dizi[i-1];
        if(cikar<0)
           cikar=-cikar;
        toplam+=cikar;

    }
    printf("%d",toplam);






    return 0;
}
