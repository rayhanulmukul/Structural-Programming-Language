#include<stdio.h>
int main()
{
    int x[10]={1,4,3,6,8,2,9,0,5,7};
    int i,big,j,p,tmp,k;
    for(i=1;i<=5;i++)
    {
        big=x[i];

    for(j=i;j<=5;i++)
    {
        if(x[j]>big)
        {
            p=j;
        }
    }
    int temp;
    tmp=x[p];
    x[p]=x[i];
    x[i]=temp;
    }
  for(k=1;k<9;k++)
printf("%d\n",x[k]);
return 0;
}
