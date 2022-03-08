#include<stdio.h>
int main()
{
    while(1)
    {
        int n,fibo,count=0,first=0,second=1;
        printf("Enter Range : ");
        scanf("%d",&n);

        while(count<n)
        {
            if(count<=1)
                fibo=count;

            else
            {
                fibo=first+second;
                first=second;
                second=fibo;
            }
            printf("%d \n",fibo);
            count++;
        }

    }
    getch();
}
