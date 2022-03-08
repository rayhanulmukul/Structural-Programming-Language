 #include<stdio.h>
 int main ()
 {
     int highst_marks=0,index,new_marks;
     for(index=0;index<4;index++)
        {scanf("%d",&new_marks);
     if(new_marks>=highst_marks)
        highst_marks=new_marks;
        }
        printf("%d",highst_marks);

     return 0;
 }
