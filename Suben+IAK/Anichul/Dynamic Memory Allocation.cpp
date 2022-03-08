#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int *marks;
    int i, n;
    printf("Please enter the number of students : ");
    scanf("%d", &n);

    // now allocate memory
    marks = (int *)malloc(sizeof(int) *n);
    if(marks == NULL){
        printf("Memory allocation failed for marks\n");
        return 1;
    }

    printf("Enter the marks for each student : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);
    }

    printf("Now here you can see the values : \n");

    // now prit the marks array
    for(i = 0; i < n; i++){
        printf("%d\n", marks[i]);
    }

    // now free the memory
    free(marks);

    return 0;
}
