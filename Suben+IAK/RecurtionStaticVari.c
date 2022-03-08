#include<stdio.h>

void recurse()
{
    static count = 1;
    if(count > 5){
        return 0;
    }
    printf("Count = %d\n",count);
    count++;
    recurse();
}
int main(){
    recurse();
    return 0;
}

