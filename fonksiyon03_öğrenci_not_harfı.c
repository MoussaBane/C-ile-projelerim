#include <stdio.h>
#include <stdlib.h>

char ogrencinotharf(int ogrencinot);
int main()
{
    int ogrencinot;
    printf("Cikmak icin -1 gir!\n");
    for(;;){
    printf("Ogrenci notu giriniz: ");
    scanf("%d",&ogrencinot);
    if(ogrencinot < 0)
        break;
    printf("Ogrencinot= %d. Harf olarak= %c\n",ogrencinot,ogrencinotharf(ogrencinot));


    }

    return 0;
}

char ogrencinotharf(int ogrencinot)
{
  if(ogrencinot>=0 && ogrencinot<50) return 'F';
  if(ogrencinot>=50 && ogrencinot<60) return 'E';
  if(ogrencinot>=60 && ogrencinot<70) return 'D';
  if(ogrencinot>=70 && ogrencinot<80) return 'C';
  if(ogrencinot>=80 && ogrencinot<90) return 'B';
  if(ogrencinot>=90 && ogrencinot<100) return 'A';
}
