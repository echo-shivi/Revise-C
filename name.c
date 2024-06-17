#include <stdio.h>

#define MAX_LENGTH 100

void scanName(char ch[]);
void printName(char name[]);

int main() {
    char firstname[MAX_LENGTH];
    char lastname[MAX_LENGTH];

    printf("Enter your first name:\n");
    scanName(firstname);

    printf("Enter your last name:\n");
    scanName(lastname);

    printf("First name:\n");
    printName(firstname);

    printf("Last name:\n");
    printName(lastname);

    return 0;
}

void scanName(char ch[]) {
    int i = 0;
    char c;
    // Use a loop to read characters until a newline is encountered
    for (i = 0; i < MAX_LENGTH - 1; i++) {
        c = getchar();
        if (c == '\n' || c == EOF) {
            break;
        }
        ch[i] = c;
    }
    ch[i] = '\0'; // Null-terminate the string
}

void printName(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
