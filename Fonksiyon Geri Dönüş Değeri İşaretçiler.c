#include <stdio.h>
#include <stdlib.h>

int *buyukbul(int *a1,int *a2)
{
    return (*a1>*a2)? a1 : a2;
}
int main()
{
    int sayi1,sayi2;
    printf("Sayi1= ");
    scanf("%d",&sayi1);
    printf("\nSayi2= ");
    scanf("%d",&sayi2);

    if(sayi1>sayi2)
        printf("&sayi1= %p\n\n",&sayi1);
    else
        printf("&sayi2= %p\n\n",&sayi2);

    int *ptr;
    ptr= buyukbul(&sayi1,&sayi2);
    printf("\n\nGirilen iki sayilarin arasinda en buyuk : %d\nOnun Adresi= %p\n",*ptr,ptr);


    return 0;
}
