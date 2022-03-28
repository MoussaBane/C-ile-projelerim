#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=54;
   int *aptr=&a;
   printf("&a= %p\n",&a);
   printf("aptr= %p\n\n",aptr);

   printf("a= %d\n",a);
   printf("*aptr= %d\n\n",*aptr);

   *aptr=25;
   printf("a= %d\n",a);
   printf("*aptr= %d\n\n",*aptr);

   printf("&a= %p\n",&a);
   printf("aptr= %p\n\n",aptr);





    return 0;
}
