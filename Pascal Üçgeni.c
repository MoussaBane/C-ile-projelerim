#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Pascal Üçgeni
    int N,i,j;
    int pascal[100][100];
    printf("0-20 araliginda bir sayi giriniz: ");
    scanf("%d",&N);
    if(N>=0 && N<=20){
        pascal[0][0]=1, pascal[1][0]=1, pascal[1][1]=1;
        for(i=2;i<=N;i++){
            pascal[i][0]=1;//Her satýrýn ilk deðeri 1 olacaðý için.
            pascal[i][i]=1;//Her satýrýn son deðeri 1 olacaðý için.
            for(j=1;j<i;j++){
                pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];//Kodun kalbý
            }

        }

         for(i=0;i<=N;i++){
            for(j=0;j<=i;j++){
                printf("%d ",pascal[i][j]);
            }
            printf("\n");
         }
    }
    else
        printf("Yanlis giris yaptiniz!!!");


    return 0;
}
