#include <stdio.h>
int main()
{
    int i,c=0;
    char a[25];
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
    c=c+1;
    printf("%C",c);

    return 0;
}
