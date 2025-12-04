#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[40];
    int roll;
    float marks;
};

int main() 
{
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n')
            students[i].name[len - 1] = '\0';

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        getchar(); 
        printf("\n");
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("---------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f\n",
               students[i].name,
               students[i].roll,
               students[i].marks);
    }

    return 0;
}
