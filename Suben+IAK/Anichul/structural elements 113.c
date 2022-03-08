#include<stdio.h>
struct person
    {
        int age;
        float salary;
    };
int main()
{
    struct person person1={34,35545.45};
    struct person person2,person3;

    person2.age=49;
    person2.salary=354.34;

    person3=person1;

    printf("Person1 :\n");
    printf("Person 1 age %d\n",person1.age);
    printf("Person 1 salary %.2f\n\n",person1.salary);


    printf("Person2 :\n");
    printf("Person 2 age %d\n",person2.age);
    printf("Person 2 salary %.2f\n\n",person2.salary);

    printf("Person3 :\n");
    printf("Person3 age %d\n",person3.age);
    printf("Person3 salary %.2f\n",person3.salary);


    getch();
}


