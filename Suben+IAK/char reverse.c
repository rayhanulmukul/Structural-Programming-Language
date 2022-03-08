#include <stdio.h>
int main ()
{
    char str[100];
    int a,i,c=0;
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++);
    {c=c+1;}
    for(i=0;i<c/2;i++)
    {
        a=str[i];
        str[i]=str[c-(i+1)];
        str[c-(i+1)]=a;

    }
    for(i=0;i<c/2;i++)
        printf("%c",str[i]);
    return 0;
}
