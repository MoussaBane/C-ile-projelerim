#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grafik[10]={19,5,1,3,18,14,8,32,15,12};
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("%d.eleman degeri: %2d --->",i,grafik[i]);
        for(j=1;j<=grafik[i];j++)
        {
            printf("*");
        }
       printf("\n");
    }








    return 0;
}
