#include<stdio.h>
int main()
{

    int num1,num2,result;
    float avg;
    printf("Enter two integer number : ");
    scanf("%d %d",&num1,&num2);

    result=num1+num2;
    avg=result/(float)2;
    printf("avg = %0.2f\n",avg);

    result=num1-num2;
    printf("Sub = %d\n",result);

    result=num1*num2;
    printf("mul = %d\n",result);

    result=num1/num2;
    printf("div = %d\n",result);

    result=num1%num2;
    printf("Remainder = %d\n",result);


}
