#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Ortakbul(int *,int *,int *,int );
int main()
{
    int a[50],b[50],c[51];
    int n=50;
    srand(time(0));

    for(int i=0;i<n;i++){
        a[i]=(rand()%1000)+1;
        b[i]=(rand()%1000)+1;
    }
    printf("a dizisi: ");

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n\n\n");

    printf("b dizisi: ");

    for(int i=0;i<n;i++)
        printf("%d ",b[i]);

    for(int i=0;i<n+1;i++)
        c[i]=-1;

    printf("\n\n");

    Ortakbul(a,b,c,n); //Ortakbul fonksiyon...

    if(c[0]==-1)
        printf("Ortak Eleman(lari) Bulunamadi...");
    else
        printf("a ve b dizilerinin ortak elemanlari: ");
        int i=0;
        while(c[i]!=-1){
            printf("%d ",c[i++]);
        }


    return 0;
}
void Ortakbul(int *aptr,int *bptr,int *cptr,int boyut)
{
    int i,j,k,sayac=0;
    for(i=0;i<boyut;i++){
        for(k=0;k<i;k++){
            if(*(aptr+k)==*(aptr+i)){
                break;
            }

        }
        if(k!=i)
            continue;

        for(j=0;j<boyut;j++){
                if(*(aptr + i) == *(bptr +j)){
                        *(cptr + sayac++) = *(aptr + i);
                        break;
                }
        }
    }

}
