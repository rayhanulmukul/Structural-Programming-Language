#include<stdio.h>
int main()
{
    int num[10],i,count=0,count1=0,count2=0;
    for(i=0;i<=2;i++)
        {scanf("%d",&num[i]);
         //for(i=0;i<=2;i++)

        if(num[i]>=100 && num[i]<=199)
            count=count+1;
        else if(num[i]>=200 && num[i]<=299)
            count1=count1+1;
        else if(num[i]>=300 && num[i]<=399)
            count2=count2+1;
    }
    printf("%d %d %d",count,count1,count2);


    return 0;
}
