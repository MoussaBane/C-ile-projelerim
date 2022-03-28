#include <stdio.h>
#include <stdlib.h>

/*A->B->C->NULL (->)erol operatörü.
|A|ptr|   |B|ptr|   |C|ptr| KAPSÜLLLER(DÜÐÜMLER)*/

typedef struct KAPSUL{

    char veri;
    struct KAPSUL *ptr;

}DUGUM;

int main()
{
    DUGUM A,B,C;//Düðümlerin tanýmlanmasý.

    A.veri='A';
    B.veri='B';
    C.veri='C';
    A.ptr=&B;
    B.ptr=&C;
    C.ptr=NULL;

    printf("A_Veri: %c, B_Veri: %c, C_Veri: %c\n\n",A.veri,B.veri,C.veri);

    printf("A nin adresi: %p.\nB nin adresi: %p.\nC nin adresi: %p.\n\n",&A,&B,&C);

    printf("A.ptr: %p\nB.ptr: %p\nC.ptr: %p\n\n",A.ptr,B.ptr,C.ptr);

    printf("A nin 1 otesindeki veri: %c\n",(*(A.ptr)).veri);
    printf("A nin 1 otesindeki veri (->): %c\n\n", A.ptr->veri);

    printf("A nin 2 otesindeki veri: %c\n", (*((*(A.ptr)).ptr)).veri );
    printf("A nin 2 otesindeki veri (->): %c\n\n", A.ptr->ptr->veri );



    return 0;
}
