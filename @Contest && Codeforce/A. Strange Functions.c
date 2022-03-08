#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
        l=strlen(arr);
        printf("%d",l+1);
        l=0;
    }


}
