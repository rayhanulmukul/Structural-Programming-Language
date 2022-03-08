#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2,A[10][10],second[10][10];

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //second matrix input
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
}
