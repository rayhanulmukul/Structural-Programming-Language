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
            printf("%c",row+96);// row,col,*,#,row+64,row+96,col+64,col+96
        }
        printf("\n");
    }

}
