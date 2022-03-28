#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[6]={1,2,3,4,5,6};
   int *ptr=dizi;//ptr=dizi[0];
   printf("*ptr= %d\n",*ptr);
   printf("*(ptr+1)= %d\n",*(ptr+1));
   printf("*(ptr+2)= %d\n",*(ptr+2));
   printf("*(ptr+3)= %d\n",*(ptr+3));
   printf("*(ptr+4)= %d\n",*(ptr+4));
   printf("*(ptr+5)= %d\n",*(ptr+5));

   printf("\n\nBir for dongusu yardimiyla\n\n");

   for(int i=0;i<6;i++)
    printf("dizi[%d]= %d\n",i,*(ptr+i));

   printf("\n\nFor ile ayni gosteris yaptigimiz gibi \n\n");

   for(int i=0;i<6;i++){
     printf("*(ptr+%d)= %d\n",i,*(ptr+i));
    }








    return 0;
}
