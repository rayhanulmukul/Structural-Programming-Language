#include<stdio.h>
int main()
{
    int A[10][10],trans[10][10],i,j,row,col;
    printf("Eneter Number Row and Columns for the matrix : ");
    scanf("%d %d",&row,&col);

    //getting the elements for the matrix
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //printing Matrix
    printf("\n\nEntered  Matrix \n");
    for(i=1;i<=row;i++)
    {
        printf("\t");
        for(j=1;j<=col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //transpose
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            trans[j][i]=A[i][j];
        }

    }
    //transpose Matrix printf
    printf("Transpose Matrix printf \n");
    for(i=1;i<=col;i++)
    {
        printf("\t");
        for(j=1;j<=row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }





}
