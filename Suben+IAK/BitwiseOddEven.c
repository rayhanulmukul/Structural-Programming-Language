#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n&1);
    if(n & 1){                      // 0 = false
        printf("%d is odd\n",n);
    }
    else{                           // 1 = true
        printf("%d is even\n",n);
    }
    return 0;
}
