#include<stdio.h>
int main()
{
    int sum=0,temp,i,r,initialnum,finalnum;
    printf("Initialnum :");
    scanf("%d",&initialnum);

    printf("Finalnum:");
    scanf("%d",&finalnum);

    for(i=initialnum;i<=finalnum;i=i+1)
    {
        temp=i;
        while(temp)
        {
            r=temp%10;
            sum=sum+r*r*r;  //1*1*1 5*5*5 3*3*3 = 153
            temp=temp/10;
        }
        if(sum==i)
            printf("%d ",i);
      sum=0;
    }


}
