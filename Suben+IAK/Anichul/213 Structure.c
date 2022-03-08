
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
     person3.age=66;
     person3.salary=5000.45;


    printf("person1: \n");
    printf("Age= %d\n",person1.age);
    printf("salary= %.2f\n",person1.salary);


    printf("person2: \n");
    printf("Age= %d\n",person2.age);
    printf("salary= %.2f\n",person2.salary);

    printf("person3: \n");
    printf("Age= %d\n",person3.age);
    printf("salary= %.2f\n",person3.salary);


    getch();
}
