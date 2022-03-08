#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int l,c=0,c1=0;
    l=strlen(a);
    for(int i=0N;i<l;i++)
    {
//        if(a[i]>=97 && a[i]<=122 && a[i+1]>=65 && a[i+1]<=90)
//        {
//            //printf("%s",a);
//            break;
//        }


        if(a[0]>=97 && a[0]<=122)
            {
              a[0]=a[0]-32;
            }
        if(a[i+1]>=65 && a[i+1]<=90)
        {
            a[i+1]=a[i+1]+32;
        }
    }
        printf("%s",a);


}
