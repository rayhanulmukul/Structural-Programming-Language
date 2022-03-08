#include<stdio.h>
int main()
{
    int row,col,n,x=11;
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
    for(col=1;col<=x-row;col++)
    {
        printf("%c ",col+64);
    }
    printf("\n");
    }

}

