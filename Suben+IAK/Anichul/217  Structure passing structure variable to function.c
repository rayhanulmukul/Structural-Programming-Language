#include<stdio.h>

struct person
{
    char name[20];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("\nName : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %.3f\n",p.salary);
}

int main()
{
    struct person person1,person2;
    strcpy(person1.name,"Rayhanul Islam");
    person1.age=34;
    person1.salary=3455.23;
    display(person1);

    strcpy(person2.name,"Hafijur Rahman");
    person2.age=25;
    person2.salary=3000.23;
    display(person2);

    getch();

}
