#include <stdio.h>
#include <string.h>

/* Structures in C - TN 11th Std */

struct Student
{
    char name[50];
    int rollno;
    float mark1, mark2, mark3;
    float total;
    float average;
    char grade;
};

int main()
{
    struct Student s;

    printf("Enter Name: "); gets(s.name);
    printf("Enter Roll No: "); scanf("%d", &s.rollno);
    printf("Enter Mark1 Mark2 Mark3: ");
    scanf("%f %f %f", &s.mark1, &s.mark2, &s.mark3);

    s.total   = s.mark1 + s.mark2 + s.mark3;
    s.average = s.total / 3;

    if(s.average >= 90)      s.grade = 'A';
    else if(s.average >= 75) s.grade = 'B';
    else if(s.average >= 60) s.grade = 'C';
    else                     s.grade = 'F';

    printf("\n--- Student Report ---\n");
    printf("Name    : %s\n", s.name);
    printf("Roll No : %d\n", s.rollno);
    printf("Total   : %.1f\n", s.total);
    printf("Average : %.2f\n", s.average);
    printf("Grade   : %c\n", s.grade);

    return 0;
}
