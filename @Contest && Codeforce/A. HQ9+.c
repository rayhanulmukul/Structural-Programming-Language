#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l;
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;


}
