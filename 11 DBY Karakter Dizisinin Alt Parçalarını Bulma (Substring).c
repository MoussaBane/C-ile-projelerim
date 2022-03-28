#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *SubString(char *ptr,int p,int u);
int main()
{
   char metin[100];
   int pozisyon,uzunluk;

   printf("Bir metin giriniz: ");
   gets(metin);

   char *metin2=(char *)malloc(strlen(metin)*sizeof(char));
   strcpy(metin2,metin);

   printf("Kopyalama islemi baslamak istedigin pozisyon: ");
   scanf("%d",&pozisyon);
   pozisyon--;     //Indis olacaðý için 1 çýkarýyoruz.
   printf("Ne kadar karakter olsun? ");
   scanf("%d",&uzunluk);

   char *yenimetin;
   yenimetin = SubString(metin2,pozisyon,uzunluk);

   printf("Sonuc: %s\n",yenimetin);


    return 0;
}
char *SubString(char *ptr,int p,int u)
{
    for(int i=0;i<u;i++){
        *(ptr + i)= *(ptr + p + i);
        //ptr[i]=ptr[p+i];
    }
    ptr[u]='\0';
    ptr=(char *)realloc(ptr,(u+1)*sizeof(char));

    return ptr;
}
