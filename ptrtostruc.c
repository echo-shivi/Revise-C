#include <stdio.h>
#include <string.h>

struct student
{
    // structure are stored in contiguous memory locations
    char name[100]; // 214
    int roll;       // 2010
    float cgpa;     // 210
};
int main()
{
    struct student s1;
    s1.roll = 01;
    s1.cgpa = 8.52;
    strcpy(s1.name, "shivi");

    printf(" Name : %s , Roll no : %d , CGPA: %f", s1.name, s1.roll, s1.cgpa);

    struct student s2;
    s2.roll = 02;
    s2.cgpa = 8.52;
    strcpy(s2.name, "srivalli");
    printf(" Name : %s , Roll no : %d , CGPA: %f", s2.name, s2.roll, s2.cgpa);

    struct student s3;
    s3.roll = 03;
    s3.cgpa = 8.52;
    strcpy(s3.name, "sviiii");

    printf(" Name : %s , Roll no : %d , CGPA: %f", s3.name, s3.roll, s3.cgpa);

    // Null values assigned h!!
    struct student s4 = {0};
    printf(" Name : %s , Roll no : %d , CGPA: %f", s4.name, s4.roll, s4.cgpa);

    struct student s5 = {"ashu", 50, 7.9};
    printf(" Name : %s , Roll no : %d , CGPA: %f", s5.name, s5.roll, s5.cgpa);

    struct student s6 = {"bp", 01, 9.33};
    printf(" Name : %s , Roll no : %d , CGPA: %f", s6.name, s6.roll, s6.cgpa);

    // structure ka pointer
    struct student *ptr = &s1;
    printf(" Name : %s , Roll no : %d , CGPA: %f", (*ptr).name, (*ptr).roll, (*ptr).cgpa);

    // Arrow Operator
    // (*ptr).code <---> ptr->code same same but different no money no honey

    printf(" Name : %s , Roll no : %d , CGPA: %f", ptr->name, ptr->roll, ptr->cgpa);
}