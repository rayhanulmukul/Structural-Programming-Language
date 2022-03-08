#include<stdio.h>
int main()
{
    char str1[50]="My Name Is ";
    char str2[]="Rayhanul Islam";

    int i=0,j=0,len=0;

    while(str1[i]!='\0')
    {
        len++;
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("str1 =%s",str1);



}
