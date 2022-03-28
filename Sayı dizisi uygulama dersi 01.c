#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[6]={4,6,5,2,1,3};
    int aranan_blok[3]={2,1,3};
    int i,j;
    for(i=0;i<6;i++)
    {
        for (j=0;j<3;j++)
        {
            if(dizi[i]==aranan_blok[j])
            {
                i++;
                continue;
            }
            else
            {
                break;
            }


        }
        if(j==3)
        {
            printf("Aranan Blok Bulundu.");
            break;
        }

    }
    if(j<3)
    {
        printf("Blok Bulunamadi");
    }









    return 0;
}
