#include<iostream>
#include<stdio.h>
using namespace std;
void change (int x)
{
    x=20;
    printf("%d",x);
}
int main()
{
    int x=10;
    change(x);
    printf("%d",x);


}
