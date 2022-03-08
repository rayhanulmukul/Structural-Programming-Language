#include<stdio.h>

int* getvalue()
{
  int x;
  x=100;
  return &x;


}
int main()
{
    int* px=getvalue();
    printf("%d\n",*px);


}
