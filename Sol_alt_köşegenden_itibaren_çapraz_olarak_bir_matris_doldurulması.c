#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,M,x,y,i,sayac=1;
   int matris[100][100];
   scanf("%d",&M);
   scanf("%d",&N);
   printf("%d X %d boyutlu bir matris:\n",M,N);

   for(i=M-1;i>=0;i--){
    x=i;y=0;
    while(x<M && y<N){
        matris[x++][y++]=sayac++;
    }
   }

   for(i=1;i<N;i++){
    x=0;y=i;
    while(x<M && y<N){
        matris[x++][y++]=sayac++;
    }
   }

   for(i=0;i<M;i++){
    for(int j=0;j<N;j++){
        printf("%4d ",matris[i][j]);
    }
    printf("\n");
   }






    return 0;
}
