#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value : ");
    scanf("%d %d",&x,&y);

    double result = pow(x,y);
    printf("power = %.2lf\n",result);

}
