#include <stdio.h>
int main()
{
    int i;
    i=5;
    if(i>0)
    {
        if(i%2==0)
            printf("%d is an even number",i);
        else
            printf("%d is an odd number",i);

    }
    else
        printf("false");
    return 0;
}
