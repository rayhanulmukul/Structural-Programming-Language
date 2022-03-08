#include<stdio.h>
int main()
{
    int n1 = 65, n2 = 95, n3;
    n3 = n1 & n2;
    int n4 = n1 | n2;
    int n5 = n1 ^ n2;
    printf("%d & %d = %d\n",n1, n2, n3);
    //printf("%d | %d = %d\n",n1, n2, n4);
    //printf("%d ^ %d = %d\n",n1, n2, n5);
    return 0;
}
