#include<stdio.h>
int main()
{

    char name[25];
    double a,b,s;
    scanf("%s",name);
    scanf("%lf %lf",&a,&b);
    s=(b/100*15+a);
    printf("TOTAL = R$ %0.2lf\n",s);
    return 0;


}
