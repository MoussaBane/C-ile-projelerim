#include <stdio.h>
#include <stdarg.h>

int toplamyap(int n,...)
{
    va_list ap;
    va_start(ap,n);
    int toplam=0,i;
    for(i=0;i<n;i++){
        toplam += va_arg(ap,int);
    }
    va_end(ap);
    return toplam;
}



int main()
{
    printf("11+22= %d\n",toplamyap(2,11,22));
    printf("11+22+33= %d\n",toplamyap(3,11,22,33));
    printf("11+22+33+44= %d\n",toplamyap(4,11,22,33,44));
    printf("11+22+33+44+55= %d\n",toplamyap(5,11,22,33,44,55));

    return 0;
}
