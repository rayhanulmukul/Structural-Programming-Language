#include<stdio.h>
int main()
{
    char string[]="Rayhanul islam";

    int len=0,i=0;

    while(string[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d",len);



}
