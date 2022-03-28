#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char isim[21];
    int yas;
}KISI;

int main()
{
    KISI person;
    KISI *personptr;
    personptr=&person;

    strcpy(person.isim,"Ahmet");
    person.yas=25;

    printf("person.isim: %s.  person.yas= %d\n\n",person.isim,person.yas);

    strcpy(personptr->isim,"Mehmet");
    personptr->yas=15;

    printf("personptr->isim: %s.  personptr.yas: %d\n\n",personptr->isim,personptr->yas);

    strcpy((*personptr).isim,"Ceylan");
    (*personptr).yas=45;

    printf("(*personptr).isim: %s.  (*personptr).yas: %d\n\n",(*personptr).isim,(*personptr).yas);

    printf("&person= %p\npersonptr= %p\n&(person.yas)= %p\n&((*personptr).yas)= %p\n",&person,personptr,&(person.yas),&((*personptr).yas));
    printf("\nperson.isim= %p.    personptr->isim= %p\n",person.isim,personptr->isim);


    return 0;
}
