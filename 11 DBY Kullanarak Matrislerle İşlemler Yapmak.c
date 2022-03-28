#include <stdio.h>
#include <stdlib.h>

void matrisdoldur(int *matris,int satir,int sutun);
void toplammatris(int *matris,int *matris1,int *matris2,int satir,int sutun);

int main()
{
    int satir,sutun;

    printf("Ilk matris icin : \n");

    printf("Satir sayisi: ");
    scanf("%d",&satir);

    printf("Sutun sayisi: ");
    scanf("%d",&sutun);

    int *matris1=(int *)malloc(satir*sutun*sizeof(int)); //calloc kullanmak istenilirse calloc((satir*sutun),sizeof(int));

    matrisdoldur(matris1,satir,sutun); //Matris1 doldurulmak için...

    printf("\nIkinci matris icin: \n");

    printf("Satir sayisi: ");
    scanf("%d",&satir);

    printf("Sutun sayisi: ");
    scanf("%d",&sutun);

    int *matris2=(int *)calloc((satir*sutun),sizeof(int));

    matrisdoldur(matris2,satir,sutun); //Matris2 doldurulmak için...

    int *matristoplam=(int *)malloc(satir*sutun*sizeof(int));

    printf("\nMatris toplami: \n");
    toplammatris(matristoplam,matris1,matris2,satir,sutun);

    return 0;
}
void matrisdoldur(int *matris,int satir,int sutun)
{
    int i,j;
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("matris[%d][%d]= ",i+1,j+1);
            scanf("%d",matris + i*sutun + j);
        }
    }
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%5d",*(matris + i*sutun + j));
        }
        printf("\n");
    }

}
void toplammatris(int *matris,int *matris1,int *matris2,int satir,int sutun)
{
    int i,j;
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
                *(matris + i*sutun + j) = *(matris1 + i*sutun + j) + *(matris2 + i*sutun + j);
        }
    }

    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%5d",*(matris + i*sutun + j));
        }
        printf("\n");
    }

}
