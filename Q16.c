#include <stdio.h>


struct Student 
{
    char name[40];
    int roll;
    float marks;
};

int main() 
{
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);   

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name  : %s", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}
