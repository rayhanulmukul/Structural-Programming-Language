#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
            printf("* ");// row,col,*,#,row+64,row+96,col+64,col+96
        printf("\n");
    }



}

