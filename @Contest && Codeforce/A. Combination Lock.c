#include<stdio.h>
int main(void)
{
    int i,n,m,s=0;
    char a[1000],b[1000];
    scanf("%d%s%s",&n,&a,&b);
    for(i=0;i<n;i++)
    {
        m=a[i]-b[i];
        if(m<0)
        {
            m=-m;
        }
        if(m>5)
        {
            m=10-m;
        }
        s=s+m;
    }
    printf("%d\n",s);
    return 0;


}
