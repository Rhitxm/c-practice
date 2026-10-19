/*
    Write a C program to create a student database using structures.
    Store each student's roll number, name, and marks in 3 subjects.
    Calculate the total, average, and grade for each student.

    DON'Ts:
    1. Do not use separate arrays for student details.
    2. Do not use global variables for storing student data.
    3. Do not use sorting.
    4. Do not use library functions to calculate total, average, or grade.
    5. Do not put the entire logic inside main().
    6. Do not ignore students with the same marks.
    7. Do not use hardcoded values for the number of students.
*/

#include <stdio.h>

struct student
{
    int rollno;
    char name[100];
    float marksA;
    float marksB;
    float marksC;
};

void input(struct student arr[], int n);
void output(struct student arr[], int n);

int main()
{

    int n;
    printf("Enter number of students : \n");
    scanf("%d", &n);

    struct student arr[n];

    input(arr, n);
    output(arr, n);
    return 0;
}

void input(struct student arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("\n\n\nStudent %d\n", i + 1);
        getchar();
        printf("Enter name: \n");
        fgets(arr[i].name, 100, stdin);
        printf("Enter Roll No.: \n");
        scanf("%d", &arr[i].rollno);
        printf("Enter marks in subject 1: \n");
        scanf("%f", &arr[i].marksA);
        printf("Enter marks in subject 2: \n");
        scanf("%f", &arr[i].marksB);
        printf("Enter marks in subject 3: \n");
        scanf("%f", &arr[i].marksC);
    }
}

void output(struct student arr[], int n)
{
    float total, grade, average;
    for (int i = 0; i < n; i++)
    {
        total = arr[i].marksA + arr[i].marksB + arr[i].marksC;
        average = total / 3;

        printf("\n\n\nStudent %d\n", i + 1);
        printf("Roll No.: %d \n", arr[i].rollno);
        printf("Candidate name : ");
        puts(arr[i].name);
        printf("Total: %2f\n", total);
        printf("Average: %2f\n", average);

        if (average >= 90)
        {
            printf("Grade : A+\n");
        }
        else if (average >= 80 && average <= 89)
        {
            printf("Grade : A \n");
        }
        else if (average >= 70 && average <= 79)
        {
            printf("Grade : B \n");
        }
        else if (average >= 60 && average <= 69)
        {
            printf("Grade : C \n");
        }
        else if (average >= 50 && average <= 59)
        {
            printf("Grade : D \n");
        }

        else if (average < 50)
        {
            printf("Grade : F \n");
        }
    }
}
