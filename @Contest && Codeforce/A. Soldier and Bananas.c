#include<stdio.h>
int main()
{
    int k,n,w,i,s=0,r;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        s=s+k*i;
    }
    r=s-n;
    if(r<=0)
        printf("0");
    else
    printf("%d\n",r);



}
