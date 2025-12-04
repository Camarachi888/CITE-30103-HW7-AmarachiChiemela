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
    int i, maxIndex = 0;

    
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

     for (i = 1; i < 5; i++) 
     {
        if (students[i].marks > students[maxIndex].marks) 
	{
            maxIndex = i;
        }
    }

    printf("\n--- Highest Marks ---\n");
    printf("Name  : %s\n", students[maxIndex].name);
    printf("Roll  : %d\n", students[maxIndex].roll);
    printf("Marks : %.2f\n", students[maxIndex].marks);

    return 0;
}

