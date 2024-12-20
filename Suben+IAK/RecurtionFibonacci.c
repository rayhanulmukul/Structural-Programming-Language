#include<stdio.h>
#include<string.h>

int f_calls = 0;
int fibo[50];

int fib(int n)
{
    f_calls = f_calls + 1;

    if(fibo[n] != 0){
        return fibo[n];
    }

    if(n == 1 || n == 2){
        return fibo[n];
    }
    fibo[n] = fib(n - 1) + fib(n - 2);

    return fibo[n];
}

int main()
{
    int n;
    char s[3];
    scanf("%d",&n);
    int b = n;

    fibo[1] = 1;
    fibo[2] = 2;

    if(n == 1){
        strcpy(s, "st");
    }
    else if(n == 2){
        strcpy(s, "nd");
    }
    else if(n == 3){
        strcpy(s, "rd");
    }
    else{
        strcpy(s, "th");
    }

    printf("%d%s fibonacci number is %d\n", n, s, fib(n));
    printf("Number of funtion calls : %d\n", f_calls);

    for(n = 1; n < b; n++){
        printf("%d: %d\n", n, fibo[n]);
    }
    return 0;
}





















