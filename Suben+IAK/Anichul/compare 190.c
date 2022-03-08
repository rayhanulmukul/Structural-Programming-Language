#include<stdio.h>
int main()
{
    char str1[]="Rayhanul islam";
    char str2[]="Rayhanul islam";

    int a = strcmp(str1,str2);

    if(a==0)
        printf("Strings are Equal");
    else
    printf("Strings are not Equal");




}
