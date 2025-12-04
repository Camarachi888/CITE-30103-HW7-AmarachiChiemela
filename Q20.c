#include <stdio.h>
#include <string.h>

struct Date 
{
    int day;
    int month;
    int year;
};

struct Student 
{
    char name[40];
    int roll;
    float marks;
    struct Date dob;   // date of birth
};

void printStudent(struct Student s) 
{
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
    printf("DOB   : %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

int main() 
{
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    size_t len = strlen(s.name);
    if (len > 0 && s.name[len - 1] == '\n')
        s.name[len - 1] = '\0';  

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printStudent(s);

    return 0;
}
