#include<stdio.h>
int main()
{
    int n1,n2,n3,i1=1,i2=3,i3=5,sum=0;
    printf("Enter n1, n2 and n3 = ");
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("1.3.5 + 2.5.7 + 3.7.9 + .....+%d.%d.%d",n1,n2,n3);

    while(i1<=n1 && i2<=n2 && i3<=n3)
    {
        sum=sum + i1*i2*i3;
        i1=i1+1;
        i2=i2+2;
        i3=i3+2;

    }
    printf("= %d",sum);


    getch();
}
