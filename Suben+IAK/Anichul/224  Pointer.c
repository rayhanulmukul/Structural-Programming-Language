#include<stdio.h>
int main()
{
    int x=5,y=8,z=7;
    int *p;

    p=&x;
    printf("x= %d\n",*p);
    printf("Addres = %u\n",&p);

    p=&y;
    printf("y= %d\n",*p);
    printf("Addres = %u\n",&p);

    p=&x;
    printf("z= %d\n",*p);
    printf("Addres = %u\n",&p);



}
