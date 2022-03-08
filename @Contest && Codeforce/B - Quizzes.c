#include<stdio.h>
#include<string.h>
int main()
{
    int N,X,c=0,c1=0,s,l;
    scanf("%d%d",&N,&X);

    char S[100];
    scanf("%c",S);

    l=strlen(S);
    for(int i=0; i<l; i++)
    {
        if(S[i]=='w')
            c++;
        else if(S[i]=='o')
            c1++;
    }
//    for(int i=0;i<N;i++)
//    {
//        if(S[i]=='w')
//                c++;
//            else if(S[i]=='o')
//                c1++;
//    }

    printf("%d",c);


}
