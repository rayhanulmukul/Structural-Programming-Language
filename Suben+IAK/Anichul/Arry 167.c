#include<stdio.h>
int main()
{

    int a[10],sum=0,i;
    printf("Enter 5 numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   //scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
   /* a[0]=1;
    a[1]=2;
    a[2]=5;
    a[3]=4;
    a[4]=6;*/
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum : %d\n",sum);
    printf("Average : %.2f\n",(float)sum/5);



}
