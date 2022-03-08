#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    int i,l;
    l=strlen(s);
    for(i=0;i<1;i++)
    {
        if(s[i]>=97)
        s[i]=s[i]-32;

    }
    printf("%s",s);
    return 0;

}
