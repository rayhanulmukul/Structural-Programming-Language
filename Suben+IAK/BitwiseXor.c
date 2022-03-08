#include<stdio.h>
int main()
{
    int ara[] = {1, 2, 3, 4, 1, 2, 3};
    int result, n = 7;

    for(int i = 1; i < n; i++){
        result = result ^ ara[i];
    }
    printf("Result : %d\n",result);
    return 0;

}
