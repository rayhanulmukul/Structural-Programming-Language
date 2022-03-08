/*Can the following program sum all the numbers in the arry num[]?
if not,modify only one variable or a value in the program so that
you can sum first ten numbers in the arry.
However,you can't update the aary.*/
#include <stdio.h>
int main()
{
    int num[11]={5,10,15,20,11,30,35,40,45,50,0};
    int i=0,sum=0;
    int j=0;
    for(j=0;num[j%5];j++)
    {
        sum=sum+num[i];
        i=i+1;
    }
    printf("%3d",sum);
    return 0;
}
