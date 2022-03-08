#include<stdio.h>
int main()
{
    int x;
    int y=55;
    for(x=0; y<=75; y=++x) //(x++)
        printf("%10d%10d\n",x,y);
    return 0;
    /*int i,b=0;
    int a[15];
    for(i=0; i<15; i++)
    {
        a[i]=++b;
        printf("%3d",a[i]);
    }*/

}
