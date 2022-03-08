#include <bits/stdc++.h>
using namespace std;


union u{
    char ch;
    int n;
    char str[16];

}uv;

int main(){
    uv.ch = 'A';
    printf("uv.ch = %c\n", uv.ch);

    uv.x = 17;
    printf("uv.x = %d\n", uv.x);
    printf("uv.ch = %c\n", uv.ch);

    uv.y = 18;
    printf("uv.y = %d\n", uv.y);

    printf("uv.ch = %c\n", uv.ch);
    printf("uv.x = %d\n", uv.x);

    return 0;
}

