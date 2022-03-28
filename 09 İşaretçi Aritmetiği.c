#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *karakterptr, k='B';
   int  *integerptr, i=21;
   float *floatptr, f=21.0;
   double *doubleptr, d=21.665989;

   karakterptr=&k;
   integerptr=&i;
   floatptr=&f;
   doubleptr=&d;

   printf("Onceki adresleri: \n");
   printf("karakterptr= %p  integerptr= %p  floatptr= %p    doubleptr= %d   \n\n",karakterptr,integerptr,floatptr,doubleptr);
   printf("onceki degerleri: \n");
   printf("*karakterptr= %c     *integerptr= %d     *floatptr= %f       *double= %lf\n\n",*karakterptr,*integerptr,*floatptr,*doubleptr);

   karakterptr++;
   integerptr--;
   floatptr= floatptr + 2;
   doubleptr = doubleptr - 2;

   printf("Sonraki adresleri: \n");
   printf("karakterptr= %p  integerptr= %p  floatptr= %p    doubleptr= %d   \n\n",karakterptr,integerptr,floatptr,doubleptr);
   printf("Sonraki degerleri: \n");
   printf("*karakterptr= %c     *integerptr= %d     *floatptr= %f       *double= %lf\n\n",*karakterptr,*integerptr,*floatptr,*doubleptr);











    return 0;
}
