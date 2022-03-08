#include<stdio.h>
int main()
{
    struct person
    {
        int age;
        float salary;
    };
    struct person person1,person2;// local variable
    person1.age=34;
    person1.salary=354.34;
    printf("Person1 :\n");
    printf("Person 1 age %d\n",person1.age);
    printf("Person 1 salary %.2f\n\n",person1.salary);
    person2.age=20;
    person2.salary=254.34;
    printf("Person2 :\n");
    printf("Person 2 age %d\n",person2.age);
    printf("Person 2 salary %.2f\n",person2.salary);


    getch();
}

