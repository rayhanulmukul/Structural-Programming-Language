#include<stdio.h>
int main()
{
    int num[11]={5,10,15,20,0,30,35,40,45,50,0};
    int i=0,sum=0;
    while(num[i%5])
    {
        sum=sum+num[i];
        i=i+1;
    }
    printf("%3d",sum);
    return 0;


}
