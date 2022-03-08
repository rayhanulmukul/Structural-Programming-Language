/*can the following program how the summation of three numbers
(summation of a,b and c)?if not,Why?*/
#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    if(scanf("%d%d%d",&a,&b,&c)==3)
    {
        sum=a+b+c;
    }
    printf("%d",sum);
    return 0;
}
