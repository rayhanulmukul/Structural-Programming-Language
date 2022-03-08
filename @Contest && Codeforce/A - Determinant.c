#include<stdio.h>
int main()
{
    int r,c,n[100][100],s1,s2;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("n=[%d][%d]",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<1;j++)
        {

            s1=n[i][j]+n[i+1][j+1];
            s2=(n[i][j+1]+n[i+1][j]);
        }
    }
    printf("%d",s1-(-s2));




}
