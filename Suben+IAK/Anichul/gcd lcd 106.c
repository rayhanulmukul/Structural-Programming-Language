#include<stdio.h>
int main()
{

    while(1)
    {
        int num1,num2,n1,n2,rem,gcd,lcd;
        printf("Enter two number : ");
        scanf("%d %d",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcd=(num1*num2)/gcd;
        printf("gcd : lcd = %d : %d\n",gcd,lcd);

    }
    return 0;
}
