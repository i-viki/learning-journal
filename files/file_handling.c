#include <stdio.h>

/* File Handling in C - TN 11th Std */

struct Student
{
    char name[50];
    int rollno;
    float total;
};

int main()
{
    FILE *fp;
    struct Student s;

    /* Write to file */
    fp = fopen("students.dat", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student details:\n");
    printf("Name: "); gets(s.name);
    printf("Roll No: "); scanf("%d", &s.rollno);
    printf("Total: "); scanf("%f", &s.total);
    fprintf(fp, "%s %d %.1f\n", s.name, s.rollno, s.total);
    fclose(fp);

    /* Read from file */
    fp = fopen("students.dat", "r");
    printf("\nReading from file:\n");
    while(fscanf(fp, "%s %d %f", s.name, &s.rollno, &s.total) != EOF)
        printf("Name: %s | Roll: %d | Total: %.1f\n", s.name, s.rollno, s.total);
    fclose(fp);

    return 0;
}
