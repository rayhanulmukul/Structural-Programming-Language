#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col=col+1)
        {
           printf("*#"); //printf("%c",row+64); // col,row,row%2,col%2,row+64,row+96,col+64,col+96
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("*#");//printf("%c",row+64); // col,row,row%2,col%2,row+64,row+96,col+64,col+96
        }
        printf("\n");
    }


}
