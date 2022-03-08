#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        sum=(a+k)-b;
        if(sum<0)
            k=0;
        else
        k=sum;
    }
        printf("%d",sum);

}
