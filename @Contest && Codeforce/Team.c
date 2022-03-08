#include<stdio.h>
int main()
{
    int i,n,x,y,z,c=0,s=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(x==1) c++;
        if(y==1) c++;
        if(z==1) c++;

        if(c>=2) s++;
        c=0;
    }
    printf("%d\n",s);
    return 0;


}
