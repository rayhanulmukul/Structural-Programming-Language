#include<stdio.h>
#include<string.h>
int main()
{
    int i,u=0,lo=0,l;
    char s[100];
    scanf("%s",s);
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            u++;

        else if(s[i]>=97 && s[i]<=122)
            lo++;
    }
   if(u>lo)
        for(i=0;i<l;i++)
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }

    else if(u<=lo)
        for(i=0;i<l;i++)
    {
       if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
    }

    printf("%s",s);


}
