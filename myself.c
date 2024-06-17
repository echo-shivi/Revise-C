#include <stdio.h>

int main() {
    int a = 23;
    float b = 64.5;
    char c = 'c';
    char v = 'v';
    //format specifiers
    
    printf("I am %d\n", a);
    printf("My weight is %.1f\n", b);  // Using %.1f to show one decimal place
    printf("My name is %c%c\n", c, v);

    return 0;
}
