#include<stdio.h>
int main()
{
    int n=0;
    int delta=5;
    for(n=1;n<10000;n=n+delta)
    {
        if(delta>=5) delta=delta-5;

    }
    printf("%d",n);



}
