#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==col || row==n || col==1)
                printf("%d",row);// row,col,*,#,row+64,row+96,col+64,col+96
            else
                printf(" ");
        }

        printf("\n");
    }

}
