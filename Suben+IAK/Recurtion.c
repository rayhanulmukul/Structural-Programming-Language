#include<stdio.h>

int x = 1;

void myfnc(int y)
{
    y = y * 2; // 10
    x = x + 10; // 11
    printf("myfnc, x = %d, y = %d\n", x, y);
}

int main(){
    int y = 5;
    x = 10;
    myfnc(y);
    printf("main, x = %d, y = %d\n", x, y); // 10 5

    return 0;

}























