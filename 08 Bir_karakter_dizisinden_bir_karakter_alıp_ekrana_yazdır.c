#include <stdio.h>
#include <stdlib.h>

char CharAt(char str[] ,int n );

int main()
{
    char str[10]="MoussaBane";
    printf("%c\n",CharAt(str,6));

    return 0;
}
char CharAt(char str[],int n)
{
    return str[n];
}
