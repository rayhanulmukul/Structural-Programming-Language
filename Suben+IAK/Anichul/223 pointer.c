#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;

    printf("%d\n",x);
    printf("%u\n",&x); /// %x,%d
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p);


}
