#include <stdio.h>
int main()
{
    int i;
    i=110;
    if (i>0)
    {
        if(i<100)
        {
            if(i%3==0)
                printf("divisible by 3");
            else
                printf("not divisible");
        }
        else
            printf("not divisible");
    }
}
