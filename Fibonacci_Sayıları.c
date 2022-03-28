#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib[21]={0,1};
    int i,sayi;

    printf("0-20 araliginda bir sayi girin: ");
    scanf("%d",&sayi);
    for(i=2;i<=sayi;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    if(sayi>20||sayi<0){
        printf("Yanlis giris!!!");
    }

    else{

    for(i=sayi;i>=0;i--){
        printf("%d ",fib[i]);
    }

    }



    return 0;
}
