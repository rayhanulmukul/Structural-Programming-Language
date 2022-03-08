#include<stdio.h>


struct person
{

    int age;
    char name[50];
    float salary;

};
int main()
{
     struct person person[4];
     for(int i=0;i<4;i++)
     {
         printf("Enter information for person %d\n",i+1);
         printf("Person Name : ");
         fflush(stdin);
         gets(person[i].name);
         printf("person Age : ");
         scanf("%d",&person[i].age);
         printf("person Salary: ");
         scanf("%f",&person[i].salary);
         printf("\n");

     }
     for(int i=0;i<4;i++)
     {
         printf("\nInformation for person %d\n",i+1);
         printf("person name : ");
         printf("%s\n",person[i].name);
         printf("person Age : ");
         printf("%d\n",person[i].age);
         printf("person Salary: ");
         printf("%.2f\n",person[i].salary);
         printf("\n");

     }


    getch();
}
