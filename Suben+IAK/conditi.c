#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    if(n<0)


       {printf("the number is negative\n");}
        else if(n==0)
        {
            printf("the number is zero!\n");
        }


    else
        {printf("The number is positive\n");}

    return 0;
}
