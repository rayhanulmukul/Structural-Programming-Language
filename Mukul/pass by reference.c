#include<stdio.h>

void change(int *px)
{
   *px=20;
   printf("%d\n",*px);

}
int main()
{
    int x=10;
    change(&x);
    printf("%d\n",x);



}
