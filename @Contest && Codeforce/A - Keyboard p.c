#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='Y')
    {
        char s;
        scanf("%c",&s);
        if(s=='a')
            printf("A");
        else if(s=='b')
            printf("B");
        else if(s=='c')
            printf("C");
        else
            printf("%c",s);

    }
    else
    {
        char s;
        scanf("%c",&s);
        if(s=='A')
            printf("a");
        else if(s=='B')
            printf("b");
        else if(s=='C')
            printf("c");
        else
            printf("%c",s);
    }








}
