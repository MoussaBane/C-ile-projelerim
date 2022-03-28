#include <stdio.h>
#include <stdlib.h>

void TAKAS(int *aptr, int *bptr)
{
    /*int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;*/
    *aptr = *aptr ^ *bptr;
    *bptr = *aptr ^ *bptr;
    *aptr = *aptr ^ *bptr;
}
/* a= a^b;
    b=a^b;          XOR operatörü ile.
    a=a^b; */
int main()
{
    int a=5,b=8;
    printf("Takas uygulanmadan once:\n\n");
    printf("a= %d    &a= %p\n",a,&a);
    printf("b= %d    &b= %p\n",b,&b);

    TAKAS(&a,&b);

    printf("\nTakas uygulandiktan sorna:\n\n");
    printf("a= %d    &a= %p\n",a,&a);
    printf("b= %d    &b= %p\n",b,&b);



    return 0;
}
