#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s[6][6],i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&s[i][j]);

            {
             if(s[i][j] == 1)
             {

              printf("%d",abs(i-3) + abs(j-3));

             }

            }

        }
    }
    return (0);


}
