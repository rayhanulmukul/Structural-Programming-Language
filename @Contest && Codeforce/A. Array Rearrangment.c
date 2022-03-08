#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,x,i,j,k;
        scanf("%d%d",&n,&x);
        int a[100],b[100];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("\n");
        for(k=0;k<n;k++)
        {
            scanf("%d",&b[k]);
        }
        int tem;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(b[j]<b[i])
                {
                    tem=b[j];
                    b[j]=a[i];
                    a[i]=tem;
                }
            }
        }
        printf("Acending Number :");
      for(i=0; i<n; i++)
        printf("%d ",b[j]);


    }

}
