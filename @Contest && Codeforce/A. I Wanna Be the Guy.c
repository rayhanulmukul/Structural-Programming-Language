#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,x,y;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&x);
        if(x==n)
            break;
    }
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&y);
        if(y==n)
            break;
    }
    if(x==n || y==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");


}
