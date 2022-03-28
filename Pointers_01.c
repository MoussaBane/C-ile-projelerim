#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=12;
    int *aptr=&a;
    printf("a'nin adresi: %p\na'nin degeri: %d\n",aptr,*aptr);
    *aptr=a/3;
    printf("a'nin yeni degeri: %d.\&a= %p",a,aptr);
    printf("\n\n\n");
    int x=1,y=2,z=3;
    printf("a= %d ; &x= %p\n",x,&x);
    printf("b= %d ; &y= %p\n",y,&y);
    printf("c= %d ; &z= %p\n",z,&z);

    printf("\n\n");
    int t=589;
    char *xptr=&t;
    printf("t= %d\n",*xptr);
    xptr++;
    printf("t+1= %d\n",*xptr);
    xptr++;
    printf("t+2= %d\n",*xptr);
    xptr++;
    printf("t+3= %d\n",*xptr);
    printf("t= %d",t);






    return 0;
}
