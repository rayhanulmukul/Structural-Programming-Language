#include<stdio.h>
int main()
{
    int row,n,col;

    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96); //row+64, col+64, col+96, *, #
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96); // row+64, col+64, col+96, *, #
        }
        printf("\n");
    }

}



