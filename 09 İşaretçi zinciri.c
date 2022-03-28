#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bane=201;
    int *baneptr=&bane, **baneptrptr=&baneptr;
    printf("bane= %4d\n",bane);
    printf("*baneptr= %4d\n",*baneptr);
    printf("**baneptrptr= %4d\n",**baneptrptr);
    printf("*baneptrptr= %p\n\n\n",*baneptrptr);


    printf("&bane= %p\n",&bane);
    printf("baneptr= %p\n",baneptr);
    printf("&baneptr= %p\n",&baneptr);
    printf("baneptrptr= %p\n",baneptrptr);
    printf("&baneptrptr= %p\n\n",&baneptrptr);






    return 0;
}
