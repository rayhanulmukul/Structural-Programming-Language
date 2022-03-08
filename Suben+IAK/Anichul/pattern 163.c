#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N :");
    scanf("%d",&n);


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
        printf("%c",col+64);// row,col,*,#,row+64,row+96,col+64,col+96
        for(col=row-1;col>=1;col--)
            printf("%c",col+64);// row,col,*,#,row+64,row+96,col+64,col+96
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
        printf("%c",col+64);// row,col,*,#,row+64,row+96,col+64,col+96
        for(col=row-1;col>=1;col--)
            printf("%c",col+64);// row,col,*,#,row+64,row+96,col+64,col+96
        printf("\n");
    }



}

