#include<stdio.h>
int main()
{
    char ch;
    printf("Enterb any charecter : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Capital letter");
    else if(ch>='a' && ch<='z')
        printf("Small letter");
    else
        printf("NOt a letter");
    return 0;


}
