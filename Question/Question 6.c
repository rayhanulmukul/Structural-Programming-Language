/*Sample input and a program is given.Find out the output
of the following progarm.sample input:Happy Coding!*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i=0;
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+'a'-'A';
        else if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]+'A'-'a';
    }
    printf("\n%s",str);

    return 0;
}
