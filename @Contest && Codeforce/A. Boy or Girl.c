#include<stdio.h>
int main()
{
    char s[100],tem;
    int i,j,count=0;
    scanf("%s",&s);

    for(i=0;i<s[i];i++)
    {
        for(j=i+1;j<s[j];j++)
        {
            if(s[j]<s[i])
            {
                tem=s[j];
                s[j]=s[i];
                s[i]=tem;
            }
        }
    }
    s=tem;

    for(i=0;i<s;i++)
    {
        if(s[i]!=s[i+1])
            count++;
    }
    if(count%2==0)
            printf("CHAT WITH HER!");
        else
        printf("IGNORE HIM!");

}
