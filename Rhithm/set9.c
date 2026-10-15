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
