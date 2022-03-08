#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,c1,r2,c2,i,j,k,sum=0;


    printf("Enter first row and col : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter Second row and col : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! column of first matrix not equal row of second Matrix\n");
        printf("Enter first row and col : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter Second row and col : ");
        scanf("%d %d",&r2,&c2);
    }
    //first matrix input
    for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c1; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    //second matrix input
    for(i=1; i<=r2; i++)
    {
        for(j=1; j<=c2; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

//first matrix printf
    printf("\n\nFirst Matrix Printf\n");
    for(i=1; i<=r1; i++)
    {
        printf("\t");
        for(j=1; j<=c1; j++)
        {
            printf("%d  ",first[i][j]);
        }
        printf("\n");
    }

//second matrix printf
    printf("\n\nSecond Matrix Printf\n");
    for(i=1; i<=r2; i++)
    {
        printf("\t");
        for(j=1; j<=c2; j++)
        {
            printf("%d  ",second[i][j]);
        }
        printf("\n");
    }
    //multiplicationmatrix
    for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c2; j++)    // sum= first[1=r1][1=c1] second[1=r1][1=c1] * first[1=r1][2=c2] second[2=r2][1=c1]
        {
            for(k=1; k<=c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result [i][j]=sum;
            sum=0;

        }

    }

    //Result matrix
    printf("\n\nResult Matrix Printf\n");
    for(i=1; i<=r1; i++)
    {
        printf("\t");
        for(j=1; j<=c2; j++)
        {
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }

}


