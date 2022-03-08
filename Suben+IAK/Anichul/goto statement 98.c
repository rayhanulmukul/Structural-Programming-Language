#include<stdio.h>
int main()
{
    int i=1;
Rayhan:
    printf("%d\t",i);
    i++;
    if(i<5)
    goto Rayhan;//level calling


    return 0;
}
