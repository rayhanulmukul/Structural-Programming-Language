#include<stdio.h>
int main()
{
    int  A[3][4]={{1,2,3,4},{12,13,14,15},{16,17,18,19}};
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


}
