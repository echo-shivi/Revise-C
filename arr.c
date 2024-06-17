#include <stdio.h>

int main()
{
    int aajagore[5];
    // input
    int *ptr = &aajagore[0];
    for (int i = 0; i < 5; i++)
    {
        // scanf("%d", &aajagore[i]);
        scanf("%d", (ptr + i));
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        // printf("%d",  aajagore[i]);
        printf("%d", *(ptr + i));
    }
}