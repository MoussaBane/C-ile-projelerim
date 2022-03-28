#include <stdio.h>
#include <stdlib.h>

long int firbonacci(int x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return firbonacci(x-1)+firbonacci(x-2);

}

int main()
{
    int n;
    long int sonuc;
    printf("Firbonacci Dizisinin Kacinci elemani bilmek istiyorsun?: ");
    scanf("%d",&n);

    sonuc=firbonacci(n);

    printf("Sonuc= %ld",sonuc);

    return 0;
}
