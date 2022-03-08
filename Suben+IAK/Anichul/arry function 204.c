#include<stdio.h>

void display(int x[])
{
    int i;
   for(i=0;i<6;i++)
    {
       printf("%d\n",x[i]);
    }

}
int main()
{
    int num[]={10,20,30,40,50,60};
    display(num);

}
