#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N,neolmali,toplam=0,sihirli=1;
    int karemat[50][50],sayi[1000]={0};
    printf("Lutfen N(<=30) sayisi giriniz: ");
    scanf("%d",&N);
    printf("%d adet sayi giriniz.\n",N*N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d ",&karemat[i][j]);
            sayi[karemat[i][j]]++;//Dizimizde bir eleman ka� kez yaz�lm�� bilmek i�in

        }

    }
    printf("\n\n");

    for(i=1;i<=N*N;i++){//Ald���m�z dizide her eleman bir kez yaz�lmas� laz�m
        if(sayi[i]!=1){
            sihirli=0;
        }
    }
    neolmali=(N*(N*N+1))/2;

    for(i=0;i<N;i++){ //Sat�rlar i�in!
        toplam=0;
        for(j=0;j<N;j++){
            toplam += karemat[i][j];
        }
        if(toplam!=neolmali){
            sihirli=0;
        }
    }

    for(j=0;i<N;j++){//S�tunlar i�in
        toplam=0;
           for(i=0;i<N;i++){
                 toplam += karemat[i][j];

           }
           if(toplam!=neolmali){
              sihirli=0;
           }
    }

    toplam=0;
    for(i=0;i<N;i++){ //Soldan sa�a k��egen i�in
        toplam += karemat[i][i];
    }
    if(toplam!=neolmali)
        sihirli=0;


    toplam=0;
    for(i=0;i<N;i++){//Soldan sa�a k��egen
        toplam += karemat[i][N-1-i];

    }
    if(toplam!=neolmali)
            sihirli=0;


    printf("\n%d \n",sihirli);//Girilmi� kare matrisimiz sihirli ise 1 de�ilse 0.

    for(i=0;i<N;i++){ //Matrisimiz ekrana yazd�rmak i�in
            for(j=0;j<N;j++){
                printf("%4d ",karemat[i][j]);
            }
            printf("\n");
    }
    printf("Oyleyse bu matrisi bir Sihirli_karedir.\n\n");








     /*for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("%4d ",sihirli[i][j]);
            }
            printf("\n");
        }*/


    /*else
        printf("Yanlis giris yaptiniz!!!");*/




    return 0;
}
