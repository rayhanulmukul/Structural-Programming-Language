#include<stdio.h>
#include<string.h>
int main()
{
    int j,i,l1,l2,count=0;
    char s[1000],t[1000];
    scanf("%s%s",s,t);
    l1=strlen(s);
    l2=strlen(t);
    for(j=0,i=l2-1;j<l1,i>=0;i--,j++)
    {
        if(s[j]==t[i])
            count++;
    }
    if(count==l1)
    printf("YES\n");

    else
        printf("NO");

}
