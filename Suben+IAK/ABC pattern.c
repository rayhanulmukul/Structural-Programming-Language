#include<stdio.h>
int main()
{
    int row,col,n,x=11;
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
    for(col=row;col<=x-1;col++)
    {
        printf("%c ",col+64);
    }
    printf("\n");
    }

}
