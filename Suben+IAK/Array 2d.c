#include<stdio.h>
#include<string.h>

int main()
{
    char saarc[5][100]={"Bang","ind","pak","Nep","Bhu"};
    int row,col,name_length;
    for(row=0;row<5;row++)
    {
        name_length = strlen(saarc[row]);
        for(col=0; col<name_length; col++){
            printf("(%d,%d) = %c ",row,col,saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
