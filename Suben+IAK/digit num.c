#include <stdio.h>
int main()
{
    int i,a,count=0;
    scanf("%d",&a);
    for(i=a;0<i;i=(i*10))
        {
            count=count+1;
            }
         printf("%d",count);


    return 0;
}
