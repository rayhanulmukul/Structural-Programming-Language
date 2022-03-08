#include<stdio.h>


struct person
{

    int age;
    float salary;

};
int main()
{
     struct person person1={35,435.54};
     struct person person2,person3;

     person2.age=45;
     person2.salary=4456.45;
     person3 = person2;

     if(person3.age==person2.age && person3.salary==person2.salary)
     printf("Person3 equal person2");
     else
        printf("Not equal");



    getch();
}
