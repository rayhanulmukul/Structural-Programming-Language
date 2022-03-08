#include<stdio.h>
int main()
{
    int n,pi,qi,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&pi,&qi);
        {
            if(qi-pi>=2)
                c++;
        }
    }
    printf("%d",c);



}
