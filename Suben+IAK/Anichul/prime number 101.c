#include<stdio.h>
int main()
{

    while(1)
    {
        int n,count =0,i;
    printf("Enter any positive number : ");
    scanf("%d",&n);

    for(i=2; i<n; i++)

    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }


    if(count==0)
        printf("Prime number\n");

    else
       printf("Not prime number\n");

       }

}
