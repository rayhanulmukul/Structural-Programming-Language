#include<stdio.h>
int main()
{
    int arr[4],c=0;
    scanf("%d",&arr);
    for(int i=0;i<4;i++)
    {
        if(arr[i]==arr[i+1])
            c++;
    }
    if(c>=2)
        printf("%d\n",c-1);




}
