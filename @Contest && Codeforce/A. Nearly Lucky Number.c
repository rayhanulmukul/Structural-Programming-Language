#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int i,c=0,l;
    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]=='4' || s[i]=='7')
            c++;
    }
    if(c==4 || c==7)
        printf("YES");
    else
        printf("NO");
}
