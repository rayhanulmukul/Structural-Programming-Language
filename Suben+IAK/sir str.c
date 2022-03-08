#include <stdio.h>
int main()
{
    int j=0,m,i,c=0;
    char str[125];
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
   {
       c= c+1;
   }
   for(i=c-1;i>c/2;i--)
   {
       m=str[i];
       str[i]=str[j];
       str[j]=m;
       j=j+1;
   }
   printf("%c\n",str[i]);
    return 0;
}
