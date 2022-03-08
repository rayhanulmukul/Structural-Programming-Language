#include<iostream>
#include<stdio.h>
using namespace std;

int * getvalue()
{
    int x=20;
    return &x;
}
int main()
{
    int * px=getvalue();
    printf("%d",*px);
    int y=100;


}

