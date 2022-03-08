#include<stdio.h>
int main()
{
    int div;
    int num=144;
    for(div=2;(div*div)<=num;div++)
        if(num%div==0)
        {
            if(div*div!=num)
           printf("%d divisible by %d and %d\n",num,div,num/div);
           else
           printf("%d is divisible %d\n",num,div);
        }

    return 0;



}
