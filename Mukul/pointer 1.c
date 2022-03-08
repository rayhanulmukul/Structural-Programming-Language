//#include<iostream>
#include<stdio.h>

//using namespace std;
int main()
{
    int x=10;
    printf("%d\n",(&x));

    int px;
    px=&x;

    printf("%d\n",px);
    printf("%d\n",&x);


    return 0;


}
