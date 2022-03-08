#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double Ax,Ay,Ox,Oy,Bx,By,a,b,c;
        scanf("%lf%lf%lf%lf%lf%lf",&Ax,&Ay,&Ox,&Oy,&Bx,&By);
        a=sqrt(pow((Ox-Ax),2)+pow((Oy-Ay),2));
        b=sqrt(pow((Ox-Bx),2)+pow((Oy-By),2));
        c=acos(1-((b*b)/(2*a*a)));
        printf("Case %d: %.8lf\n",i,c*a);
    }


}
