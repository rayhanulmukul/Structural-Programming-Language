#include <stdio.h>
sum()
{
    int a,b,sum;

    printf("enter number a=");
     scanf("%d",&a);


    printf("enter number b=");
      scanf("%d",&b);
    sum=a+b;
    printf("sum %d\n",sum);
}
sub()
{
    int c,d,sub;

    printf("enter number c=");
     scanf("%d",&c);
      printf("enter number d=");
     scanf("%d",&d);
    sub=c-d;
    printf("sub %d\n",sub);

}
mul()
{
    int e,f,mul;

    printf("enter number e=");
      scanf("%d",&e);
     printf("enter number f=");
      scanf("%d\n",&f);
    mul=e*f;
    printf("mul %d",mul);
}

int main()
{
    sum();
    sub();
    mul();
    return 0;
}

