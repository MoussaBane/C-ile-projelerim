#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    for (i=2;i<sayi;i++)
    {
        if(sayi%i==0)
            break;
    }
    if(sayi==i)
        printf("%d asal sayidir\n",sayi);
    else
        printf("%d asal sayi degildir\n",sayi);





    return 0;
}
