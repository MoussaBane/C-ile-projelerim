#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char dizi[100],harf;
   int i,pozdizi[100],sayac=0;
   printf("Bir cumle yaz: ");
   gets(dizi);
   printf("Aranan harfi gir: ");
   scanf("%c",harf);
   for(i=0;i<strlen(dizi);i++){
      if(harf==dizi[i]){
        pozdizi[sayac]=i;
        sayac++;

      }
   }
   if(sayac==0){
         printf("Aranan harf bulunamadi.");
   }
   else{
         printf("%d adet var bu cumlede.",sayac);
         for(i=0;i<=sayac;i++){
         printf("%d pozisyionunda.\n",pozdizi[i]);
    }
   }









    //char dizi1[50],dizi2[50];
    /*int i;
    char dizi[100];
    printf("Bir metin: ");
    gets(dizi);
    printf("%d\n",strlen(dizi));
    printf("%s",strrev(dizi));
    for(i=strlen(dizi)-1;i>=0;i--)
        printf("%c",dizi[i]);*/
   /* printf("1. metin giriniz: ");
    gets(dizi1);
    printf("2. metin giriniz: ");
    gets(dizi2);*/
    /*strcpy(dizi1,"Bursa");
    strcpy(dizi2,"bursa");
    if(strcmp(dizi1,dizi2)){
        printf("Farkli\t");
        printf("%d",strcmp(dizi1,dizi2));
    }
    else{
        printf("Ayni");
        printf("%d",strcmp(dizi1,dizi2));
        }*/
    //strcat(dizi1,dizi2);
   // printf("%s",dizi1);
    //puts(dizi1);
    //puts(dizi2);






    return 0;
}
