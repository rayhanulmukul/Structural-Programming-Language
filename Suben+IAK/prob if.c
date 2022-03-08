#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a>0;
    if(b)
        printf("%d is a positive number",b);
    if(!b)
        printf("%d is a negetive number",a);
    return 0;
}

