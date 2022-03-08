#include<stdio.h>
int main()
{
    int n1,n2,i1=1,i2=3,sum=0;
    printf("Enter n1 and n2 = ");
    scanf("%d %d",&n1,&n2);

    printf("1.3 + 2.5 + 3.7 + .....+%d.%d",n1,n2);

    while(i1<=n1 && i2<=n2)
    {
        sum=sum + i1*i2;
        i1=i1+1;
        i2=i2+2;

    }
    printf("= %d",sum);


    getch();
}
