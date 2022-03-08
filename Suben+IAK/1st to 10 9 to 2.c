#include <stdio.h>
int main()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for(i=0,j=9;i<10;i++,j--){
        ara2[j]=ara[i];
    }

    int temp;
    temp=ara[8];
    ara[8]=ara[1];
    ara[1]=temp;

    /*temp=ara[9];
    ara[9]=ara[0];
    ara[0]=temp;
    /*for(i=0;i<10;i++){
        ara[i]=ara2[i];
    }*/
    for(i=0;i<10;i++){
        printf("%d\n",ara[i]);
    }
    return 0;
}
