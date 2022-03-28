#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int n)
{
   if(n<=1){
    return 1;
   }
   else{
    return n*faktoriyel(n-1);
   }

}

int main()
{
    int x,i;
    printf("Faktoriyel hesaplamak istedigin bir sayi girin: ");
    scanf("%d",&x);

    printf("%d!= %d",x,faktoriyel(x));
    return 0;
}
