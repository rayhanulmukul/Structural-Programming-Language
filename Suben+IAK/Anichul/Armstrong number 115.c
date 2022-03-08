#include<stdio.h>
int main()
{
    int initialNum,finalNum,i,temp,r,sum=0;
    printf("Initial number : ");
    scanf("%d",&initialNum);
    printf("FinalNum number : ");
    scanf("%d",&finalNum);

    for(i=initialNum;i<=finalNum;i++)
    {
       temp=i;
       while(temp!=0)
       {
           r=temp%10;
           sum=sum+r*r*r;
           temp=temp/10;
       }
       if(i==sum)
       {
           printf("Armstrong number %d\n",sum);
       }
       sum=0;
    }



}
