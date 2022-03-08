#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int r,j,sum=0;
        scanf("%d",&r);
        for(j=1;j<=r;j++)
        {
            int a;
            scanf("%d",&a);
            {
            if(0<a && a<=99)
             sum=sum+a;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }


}
