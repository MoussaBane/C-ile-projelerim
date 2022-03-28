#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayac=1,max=1;
    char dizi[15];
    for(i=0;i<15;i++){
        scanf("%c ",&dizi[i]);
    }

    for(i=1;i<15;i++){

        if(dizi[i]==dizi[i-1]){
            sayac++;
        }
        else{
            if(sayac>max)
                max=sayac;
            sayac=1;
        }

    }
    if(sayac>max)
            max=sayac;
     printf("%d ",max);


    return 0;
}
