#include<stdio.h>
int main()
{
    double sx,sy,gx,gy;
    scanf("%lf%lf%lf%lf",&sx,&sy,&gx,&gy);

    printf("%.10lf",(sx*gy+gx*sy)/(sy+gy));


}
