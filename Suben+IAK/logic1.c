#include<stdio.h>
int main()
{
    int x=0,y=0,z=0;
    x=(y=3,(z=++y + 2)+5);
    printf("%d",x);
    return 0;


}

