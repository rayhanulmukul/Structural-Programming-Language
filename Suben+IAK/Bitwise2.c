#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
/*     printf("%d",n && !8);
 *     if(n>0 && n & (n-1)){
 *         printf("%d is not a power of 2\n",n);
 *     }
 */
    if(n && (n & (n-1)))  // n && !(n & (n-1))
    {
        printf("%d is not a power of 2\n",n);
    }
    else
    {
        printf("%d is a power of 2\n",n);
    }

}
