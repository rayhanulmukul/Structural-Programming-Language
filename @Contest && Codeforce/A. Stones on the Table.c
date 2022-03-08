#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0,i,l;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    printf("%d",count);

}
