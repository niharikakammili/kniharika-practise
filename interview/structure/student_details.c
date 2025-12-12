#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

int main()
{
    struct student s;  

    printf("Enter the details of a student\n");

    printf("Name: ");
    scanf("%s", s.name);    

    printf("Age: ");
    scanf("%d", &s.age);

    printf("\nDisplaying the data\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);

    return 0;
}

