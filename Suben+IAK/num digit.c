#include <stdio.h>
int main()
{
    int i,a,count=0;
    scanf("%d",&a);
    for(a;a>0;a=a/10)
        {
            count=count+1;
        }

        printf("%d",count);


    return 0;
}
