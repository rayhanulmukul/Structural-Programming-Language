#include<stdio.h>
int main()
{
    int x=100;
    int * px=&x;
    *px=200;
    printf("%d\n",&px);

    int** pxx=&px;
    *pxx=20;
    printf("%d\n",*pxx);//*(*pxx)=*(*200)

    return 0;



}
