#include<stdio.h>
//int main()
void search(char*pat,char*txt)
{

    int M=strlen(pat);
    int N=strlen(txt);
    int i,j;
    for(i=0; i<=N-M; i++)
    {
        for(j=0;j<M;j++)
            if(txt[i+j]!=pat[j])
            break;

        if(j==M)
    printf("Pattern Found of index %d\n",i)
    }
    /*driver code
    int main()

    }
    char txt[]="AABAACAADAABAAABAA";
    char pat[]="AABA";
    search(pat,txt);
    return 0;



}
