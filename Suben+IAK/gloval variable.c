#include<stdio.h>

double pi= 3.14;
int my_fuc()
{

    pi=3.1416;
    return;


}

int main()
{
   printf("%lf\n",pi);
   my_fuc();
   printf("%lf\n",pi);
   return 0;


}
