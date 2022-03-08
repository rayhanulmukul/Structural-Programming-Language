#include<stdio.h>
int main()
{
    int row,n,col;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);// col+64,col+96,row+96,*,#
        }
        printf("\n");
    }

}

