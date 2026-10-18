//print sum of elements inside the array
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}

//Create a struct Student containing name, roll number, and marks, then display the data.
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll_number;
    float cgpa;
};
int main(){
    struct student s1={"Rhitam", 41, 9.87};
    struct student s2={"Sumedh", 26, 9.67};
    struct student s3={0};

    printf("Student name: %s\n", s1.name);
    printf("Student roll number: %d\n", s1.roll_number);
    printf("Student name: %f\n", s1.cgpa);
printf("\n\n");
    printf("Student name: %s\n", s2.name);
    printf("Student roll number: %d\n", s2.roll_number);
    printf("Student name: %f\n", s2.cgpa);
printf("\n\n");
    printf("Student name: %s\n", s3.name);
    printf("Student roll number: %d\n", s3.roll_number);
    printf("Student name: %f\n", s3.cgpa);
printf("\n\n");
    return 0;
}

//Store information of 5 students using an array of structures and find the student with the highest marks
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll_number;
    float marks;

    struct student highest = s1;
    if (s2.marks > highest.marks)
    highest = s2;

    else if (s3.marks > highest.marks)
    highest = s3;

    else if (s4.marks > highest.marks)
    highest = s4;

    else if (s5.marks > highest.marks)
    highest = s5;

};
int main(){
    struct student s1={"Rhitam", 41, 98};
    struct student s2={"Sumedh", 26, 96};
    struct student s3={"Darsh", 24, 0};
    struct student s4={"Calculus", 9, 100};
    struct student s5={"Victus", 18, 67};

    printf("Student name: %s\n", s1.name);
    printf("Student roll number: %d\n", s1.roll_number);
    printf("marks: %f\n", s1.marks);
printf("\n\n");
    printf("Student name: %s\n", s2.name);
    printf("Student roll number: %d\n", s2.roll_number);
    printf("marks: %f\n", s2.marks);
printf("\n\n");
    printf("Student name: %s\n", s3.name);
    printf("Student roll number: %d\n", s3.roll_number);
    printf("marks: %f\n", s3.marks);
printf("\n\n");
    printf("Student name: %s\n", s4.name);
    printf("Student roll number: %d\n", s4.roll_number);
    printf("marks: %f\n", s4.marks);
printf("\n\n");
    printf("Student name: %s\n", s5.name);
    printf("Student roll number: %d\n", s5.roll_number);
    printf("marks: %f\n", s5.marks);
printf("\n\n");
    printf("\nStudent with the highest marks:\n");
    printf("CGPA: %.f\n", highest.marks);    
    return 0;
}
