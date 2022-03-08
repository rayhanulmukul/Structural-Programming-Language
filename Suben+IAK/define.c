#include <stdio.h>
#define ei else if
int main()
{
    int i;
    i=10;
    if(i<5)
        printf("c");
    ei(i>=5 && i<=10)
    printf("b");
    else
        printf("f");
}
