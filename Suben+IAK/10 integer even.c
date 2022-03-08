#include <stdio.h>
int main ()
{
    int i,num,sum,sumeven=0,sumodd=0;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
            sumeven=sumeven+num;
        else
            sumodd=sumodd+num;
    }
    sum=sumeven+sumodd;
    printf("sum=%d\n",sum);
   printf("sumeven=%d\n",sumeven);
    printf("sumodd=%d\n",sumodd);


}
