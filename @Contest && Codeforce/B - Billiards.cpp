#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float m,x;
    y1= - y1;
    if(x1==x2)
    {
        printf("%d",x1);
        //return 0;
    }

     m= 1.0*(y2-y1)/(x2-x1);

    //printf("%f",m);

    x = (m*x1-y1)/m;

    printf("%.10f",x);

}
