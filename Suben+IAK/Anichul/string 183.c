#include<stdio.h>
int man()
{
    char string[30];
    printf("Enter Full Name : ");
    gets(string); //scanf("%s",&string);

    printf("Full Name = %s",string);

}
