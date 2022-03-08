#include<stdio.h>
int main()
{
    int n,a,b,i,s,m,r;
    scanf("%d%d%d",&n,&a,&b);
    s=n-a;
    m=b+1;
    if(s<m)
    {
        printf("%d",s);
    }
    else if(s=m)
        printf("%d",m);
    else if(s>m)
    printf("%d",m);

    return 0;



}
