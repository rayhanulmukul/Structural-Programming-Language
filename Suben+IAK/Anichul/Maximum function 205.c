#include<stdio.h>

int maximum(int x[])
{
    int i,max;
    max=x[0];
   for(i=1;i<=5;i++)
    {
       if(max < x[i])
        max = x[i];
    }
    return max;

}
int main()
{

    int num[]={10,20,90,80,50,60};
    int maximumValue = maximum(num);
    printf("%d",maximumValue);

}

