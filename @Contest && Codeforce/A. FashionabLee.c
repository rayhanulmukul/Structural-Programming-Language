#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        {
            if(a%4==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

}
