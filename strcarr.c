#include <stdio.h>
#include <string.h>

struct student
{
    // structure are stored in contiguous memory locations
    int roll;       // 2010
    float cgpa;     // 210
    char name[100]; // 214
};
int main()
{
    struct student s1[100];
    s1[0].roll = 01;
    s1[0].cgpa = 8.52;
    strcpy(s1[0].name, "shivi");

    printf(" Name : %s , Roll no : %d , CGPA: %f", s1[0].name, s1[0].roll, s1[0].cgpa);
    return 0;
}