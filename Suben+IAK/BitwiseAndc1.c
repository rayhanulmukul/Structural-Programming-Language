#include<stdio.h>
#include<limits.h>

int main()
{
    int n = sizeof(int) * CHAR_BIT;
    int count = 0, num;
    scanf("%d",&num);
    int x = 1<<2;
    printf("%d",n);
    for(int i = 0; i < n; i++){
        if(num & (1 << i)) count++;
    }
    //printf("Number of 1 : %d\n",count);
    return 0;
}
