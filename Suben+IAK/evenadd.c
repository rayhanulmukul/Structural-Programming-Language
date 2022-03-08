#include <stdio.h>
int main ()
{
    int i,num,even=0,odd=0;
    for(i=0;i<10;i++)

    {
        scanf("%d",&num);

        if (num%2==0)
            even=even+num;

    else
        odd=odd+num;
        }
        printf("%d %d",even, odd);



    return 0;
}
