#include<stdio.h>

void sum(int a,int b,int c) //return_type Function_name (arguments)
{
    //return a+b+c;
    printf("The Sum is = %d\n",a+b+c);
}

void sub(int a,int b,int c) //return_type Function_name (arguments)
{
    //return a+b+c;
    printf("The Subtraction is = %d\n",a-b);
}

int main()
{
   /*int num1,num2,roll;
   printf("Enter Numbers : ");
   scanf("%d %d",&num1,&num2);

   int result=sum(num1,num2);
   printf("Sum = %d",sum(num1,num2));
   */

   /*int result=sum(5,8);

   printf("Sum = %d\n",result);

   result=sum(545,82);

   printf("Sum = %d\n",result);
   */
   /*printf("The Sum is = %d\n",sum(67,34,34));
   printf("The Sum is = %d\n",sum(63,23,54));*/
   sum(12,45,78);
   sum(56,55,34);
   sub(100,56,87);

}
