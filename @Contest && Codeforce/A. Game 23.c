#include<stdio.h>
int main()
{
    int i,n,m,count=0,tem;
    scanf("%d%d",&n,&m);
    tem=n;
    for(i=1;i<n;i++)
    {
        if(n*2<=m || n*3<=m || n*1==m)
            count++;
       else
            count=-1;
            tem=n;

    }

    printf("%d",count);


}
