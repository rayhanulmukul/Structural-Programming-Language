#include <stdio.h>
int main()
{
        int i;
        i=0;
        loop:
        printf("%d",i);
        i=i+1;
        if (i<10)
        goto loop;
        return 0;
}
