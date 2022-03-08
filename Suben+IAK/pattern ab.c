#include<stdio.h>
int main(void)
{
    const int ROWS=6;
    const int CHARS=10;
    int row;
    char ch;
    for(row=0;row<ROWS;row++)
    {
        for(ch='A';ch<='A'+(CHARS-1);ch++)
            printf("%c ", ch);
        printf("\n");
    }
    return 0;


}

