#include<stdio.h>
// global variable
struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1,person2;

    printf("Person1 Information :\n");
    printf("Enter age : ");
    scanf("%d",&person1.age);
    printf("Enter salary : ");
    scanf("%f",&person1.salary);
    printf("Person 1 age %d\n",person1.age);
    printf("Person 1 salary %.2f\n\n",person1.salary);

    printf("Person2 Information :\n");
    printf("Enter age : ");
    scanf("%d",&person2.age);
    printf("Enter salary : ");
    scanf("%f",&person2.salary);
    printf("Person 2 age %d\n",person2.age);
    printf("Person 2 salary %.2f\n",person2.salary);


    getch();
}