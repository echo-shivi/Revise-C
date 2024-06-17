#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Allah ";
    //by default strlen return unsigned long
    int length = strlen(name);
    printf("length is: %d", length);
    

    return 0;
}