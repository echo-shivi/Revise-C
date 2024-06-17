#include <stdio.h>
#include <string.h>
void salting(char password[]);
void slice(char str[], int n, int m);
int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
    slice(password, 2, 5);
}
// void slice(char str[], int n, int m)
// {
//     // char newStr[100];
//     // strcpy(newStr, str);
//     for (int i = n; i <= m && i < strlen(str); i++) // n& m ar valid values
//     {
//         printf("%c", str[i]);
//     }
//     printf("\n");
// }

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++ , j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

void salting(char password[])
{
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}