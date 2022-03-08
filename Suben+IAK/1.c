#include <stdio.h>
int main()
{
    int i=0;
    loop:
        i=i+1;
        printf("%d ",i);

        if(i<=5)
            goto loop;


    return 0;
}
