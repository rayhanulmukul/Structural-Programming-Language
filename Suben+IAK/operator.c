#include <stdio.h>
sum()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}
sub()
{
    int c,d,sub;
    scanf("%d%d",&c,&d);
    sub=c-d;
    printf("%d",& sub);

}
mul()
{
    int e,f,mul;
    scanf("%d%d",&e,&f);
    mul=e*f;
    printf("%d",mul);
}

int main()
{
    sum();
    sub();
    mul();
    return 0;
}
