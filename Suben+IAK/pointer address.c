#include<stdio.h>
int main()
{
    int n=10;
    int *p;//int* p,int * p
    p=&n;
    printf("Address of p is %p\n",p); //%d
    printf("*p = %d\n",*p);
    return 0;
}
