 #include <stdio.h>
 int main()
 {
     int i,j,s1=0,s2=0,s;
     i=1;j=0;
     loop:
         s1=s1+i;
         s2=s2+j;
         i=i+2;
         j=j+2;
         if(i<10)
            goto loop;
         s=s1+s2;
         printf("%d",s);
         return 0;
 }
