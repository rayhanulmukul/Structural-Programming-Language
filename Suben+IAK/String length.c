#include<stdio.h>

int string_length(char str[])
{
    int i=0,lengt = 0;
    while(str[i]!='\0') //for(i=0;str[i]!='\0';i++)
    {
        lengt++;
       i++;
    }
    return lengt;
}


int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s", country))//while(NULL !=gets(country))
    {
        length = string_length(country);
        printf("length :%d\n",length);
    }
    return 0;



}
