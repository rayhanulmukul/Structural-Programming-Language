#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l,c=0,d=0;
    l=strlen(s);

///cAPS == Caps,rSDFSDF == Rsdfsdf
    for(int i=1; i<l; i++)
    {
        if(s[i]>=97 && s[i]<=122)
            c++;

    }

///ABCDEFGH == abcdefgh,ASASASAS == asasasas
    for(int i=0; i<l; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            d++;
    }

///cAPS == Caps,rSDFSDF == Rsdfsdf
    if(s[0]>=97 && s[0]<=122 && c==0)
    {
        s[0]=s[0]-32;
        for(int i=1; i<l; i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
        }
        printf("%s",s);
        return 0;
    }


///ABCDEFGH == abcdefgh,ASASASAS == asasasas
    if(d==l)
    {
        for(int i=0; i<l; i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
        }
        printf("%s",s);
    }

/// Lock == Lock,CAPSlock=CAPSlock,cDFg=cDFg
    else
        printf("%s",s);



}
