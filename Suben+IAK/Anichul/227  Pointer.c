#include<stdio.h>

void swaping(int *p1,int *p2)
{
    int tem;
    tem=*p1;
    *p1=*p2;
    *p2=tem;

}

int main()
{
    int x=10,y=20;
    printf("Before swaping x= %d y= %d\n",x,y);

    swaping(&x,&y);
    printf("After swaping x= %d y= %d\n",x,y);
}
