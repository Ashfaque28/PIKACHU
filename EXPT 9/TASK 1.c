#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollNumber;
    float totalMarks;
};

void findTopper(struct Student students[], int count) 
{
    int topperIndex = 0; 

    for (int i = 1; i < count; i++) 
    {
        if (students[i].totalMarks > students[topperIndex].totalMarks) 
        {
            topperIndex = i;
        }
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Roll Number: %d\n", students[topperIndex].rollNumber);
    printf("Total Marks: %.2f\n", students[topperIndex].totalMarks);
}

int main() 
{
    struct Student students[5];
    int n = 5;

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);
    }

    findTopper(students, n);

    return 0;
}
