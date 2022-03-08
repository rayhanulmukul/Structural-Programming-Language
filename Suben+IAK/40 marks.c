#include <stdio.h>
int main ()
{
    int index,marks[40],highst_marks=0;
    for(index=0;index<=3;index ++)
    {
        scanf("%d",&marks[index]);
        if(marks[index]>=highst_marks)
            highst_marks=marks[index];
    }
    printf("%d",highst_marks);
    return 0;
}
