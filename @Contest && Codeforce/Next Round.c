#include<stdio.h>
int main()
{
    int i,x,k,c=0;
    scanf("%d%d",&x,&k);

      int n[x];
    for(i=0;i<x;i++)
        scanf("%d",&n[i]);
        k=k-1;
    for(i=0;i<x;i++)
    {
        if(n[i]>=n[k]) c++;
    }
    printf("%d\n",c);

    return 0;

}
