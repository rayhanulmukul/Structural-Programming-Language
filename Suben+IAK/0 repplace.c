#include<stdio.h>
int main()
{
    int num[3],i,m=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<3;i++)
    {
     if(num[i]>=100 && num[i]<=150)
     num[i]=m;
    }
    {
      for(i=0;i<3;i++)
      printf("%d\n",num[i]);
      return 0;
    }
}
