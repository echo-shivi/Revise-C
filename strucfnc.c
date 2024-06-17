#include <stdio.h>

struct student
{
    char name[100];
    int rollno;
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {"shivi", 20};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1)
{

    printf("name: %s", s1.name);
    printf("rollno: %d", s1.rollno);
}