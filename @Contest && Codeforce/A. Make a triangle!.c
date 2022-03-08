#include<stdio.h>
int main()
{
    int i,n[3],j,s,tem,r;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(n[j]>n[j+1])
            {
                tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;

            }
        }
    }
    for(j=0;j<3;j++)
    {
        //printf("%d ",n[j]);
    }
    if(n[0]+n[1]>n[2])
    {
        printf("0");
    }
    else if(n[0]+n[1]<=n[2])
    {
        s=n[2]-(n[0]+n[1]);
        printf("%d",s+1);
    }


}
