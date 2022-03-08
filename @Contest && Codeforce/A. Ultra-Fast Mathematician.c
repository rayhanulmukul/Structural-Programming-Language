#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%s%s",&s1,&s2);
    int l;
    l=strlen(s1);
    for(int i=0;i<l;i++)
    {
        if(s1[i]==s2[i])
            printf("0");
        else
            printf("1");
    }



}
