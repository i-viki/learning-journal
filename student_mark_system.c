#include <stdio.h>
#include <string.h>

/* Mini Project: Student Mark List - TN 11th Std */
#define MAX 50

struct Student
{
    char name[50];
    int rollno;
    float tamil, english, maths, science, social;
    float total, average;
    char grade;
};

void calcResult(struct Student *s)
{
    s->total   = s->tamil + s->english + s->maths + s->science + s->social;
    s->average = s->total / 5;
    if(s->average >= 90)      s->grade = 'A';
    else if(s->average >= 75) s->grade = 'B';
    else if(s->average >= 60) s->grade = 'C';
    else                      s->grade = 'F';
}

int main()
{
    struct Student students[MAX];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Name: "); scanf(" "); gets(students[i].name);
        printf("Roll No: "); scanf("%d", &students[i].rollno);
        printf("Tamil English Maths Science Social: ");
        scanf("%f %f %f %f %f",
            &students[i].tamil, &students[i].english,
            &students[i].maths, &students[i].science, &students[i].social);
        calcResult(&students[i]);
    }

    printf("\n%-5s %-20s %-8s %-8s %s\n", "Roll", "Name", "Total", "Average", "Grade");
    printf("--------------------------------------------------\n");
    for(i = 0; i < n; i++)
        printf("%-5d %-20s %-8.1f %-8.2f %c\n",
            students[i].rollno, students[i].name,
            students[i].total, students[i].average, students[i].grade);

    return 0;
}
