#include<stdio.h>
int main()
    {
        int a[10];
        int c,i,j;
        for(i=0;j=9;i<5;i++;j--)
        `scanf("%d",& a[i]);
         c=a[0];
         a[1]= a[8];
         a[2]= a[7];
         a[3]= a[6];
         a[4]= a[5];
         a[5]= a[4];
         a[6]= a[3];
         a[7]= a[2];
         a[8]= a[1];
         a[9]= c;
         printf("%d",c);

        return 0;
    }
