#include<stdio.h>
int main()
{

    int a=10;
    int b=25,d=26;
    int c;
    c= a&b&d;
    printf("a&b&d = %d\n",c);
    c= a|b|d;
    printf("a|b|d = %d\n",c);
    c= a^b^d;
    printf("a^b^d = %d\n",c);

    return 0;

}
