#include<stdio.h>
int fact(int n)
{
    int i,res=1;
    for(i=2;i<=n;i++)
        res*=i;
    return res;
}
int main()
{
    int n;
    printf("%d factorial %d",n,fact(n));




}
