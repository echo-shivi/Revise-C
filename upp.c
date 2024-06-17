#include <stdio.h>

int main()
{
    char ch;
    printf("enter character :");
    scanf("%c", &ch);
    // 65-90
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    // 97-122
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("not english letter");
    }
    return 0;
}