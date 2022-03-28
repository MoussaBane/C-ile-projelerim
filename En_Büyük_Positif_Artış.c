#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,Artis,maxArtis;
    int a[100];
    printf("2-100 araliginda bir sayi giriniz.");
    scanf("%d",&N);
    if(N>=2 && N<=100){
       for(i=0;i<N;i++){
        printf("%d. eleman giriniz: ",i+1);
        scanf("%d",&a[i]);
       }
       maxArtis=a[1]-a[0];
       for(i=2;i<N;i++){

            Artis=a[i]-a[i-1];
            if(maxArtis<Artis){
            maxArtis=Artis;
       }


       }
    printf("maxArtis= %d",maxArtis);


    }
   else{
    printf("Yanlis giris!!!");
   }
    return 0;
}
