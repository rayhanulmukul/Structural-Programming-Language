#include<stdio.h>
void main()
{
    int n,i,flg1=1,flg2=1,flg3=0,j;
    printf("input a positive integer:");
    scanf("%d",&n);
    for(i=3;i<=n/2;i++)
    {
        flg1=1;
        flg2=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {flg1=0;j=i;}
        }
            for(j=2;j<n-i;j++)
            {
              if((n-i)%j==0)
              {flg2=0;j=n-i;}

    }
    if(flg1==1 && flg2==1)
    {
        printf("%d= %d + %d \n",n,i,n-i);
        flg3=1;
        }
    }
    if(flg3=0)
    {
        printf("\n%d can not be expressed\n\n",n);
    }
}
