#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // concept of iterator -- iterator voh hota h jiski value change hoti rehti h update hoti reh ti h!!
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
    return 0;
}

