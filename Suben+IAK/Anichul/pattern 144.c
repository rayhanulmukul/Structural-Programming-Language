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
            printf("%d ",row%2);// col,row,col%2
        }
        printf("\n");
    }

}

