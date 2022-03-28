#include <stdio.h>
#include <stdlib.h>
int *buyukbul(int *a,int *b);
int main()
{
    int s1,s2;
    int *ptr;

    printf("S1= ");
    scanf("%d",&s1);

    printf("S2= ");
    scanf("%d",&s2);

    printf("&s1= %p\n&s2= %p\n\n",&s1,&s2);

    ptr= buyukbul(&s1,&s2);

    printf("*ptr= %d\nptr= %p\n",*ptr,ptr);

    return 0;
}
int *buyukbul(int *a,int *b)
{
    return (*a>*b)?a:b;
}
