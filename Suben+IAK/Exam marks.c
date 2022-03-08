#include<stdio.h>
int main()
{
    int marks,i,count;
    int total_marks[]={56,65,66,53,56,56,77,54,99,89,86,55,63,68,76,80,67,89,80,78};
    for(marks=50; marks<=100; marks++)
    {
        count=0;
    for(i=0;i<40;i++)
    {
        if(total_marks[i]==marks)
        {
            count++;
        }
    }
         printf("Marks : %d count : %d\n",marks,count);
    }

}
