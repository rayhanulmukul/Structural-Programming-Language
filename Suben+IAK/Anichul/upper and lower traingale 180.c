#include<stdio.h>
int main()
{
    int A[10][10],row,col,i,j,upperSum=0,lowerSum=0;
    printf("Enter Row and Col Matrix : ");
    scanf("%d %d",&row,&col);

    printf("Enter elements for the matrix \n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Printing The Matrix\n");
    for(i=1;i<=row;i++)
    {
        printf("\t");
        for(j=1;j<=col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //diagonal upper and lower trangale elements
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i<j)
            {
                upperSum=upperSum+A[i][j];
            }
            if(i>j)
            {
              lowerSum=lowerSum+A[i][j];
            }
        }
    }

    printf("\nDiagonal elements upperSum =   %d\n\n",upperSum);
    printf("Diagonal elements lowerSum =   %d\n",lowerSum);



}

