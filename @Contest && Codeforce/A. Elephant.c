#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    if(n%5==0)
        printf("%d\n",n/5);
    else
    {
    s=n/5+1;
    printf("%d",s);
    }


}
