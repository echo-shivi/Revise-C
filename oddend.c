#include <stdio.h>
int main()
{
    // int n;
    // do
    // {
    //     scanf("%d\n", &n);
    //     printf("%d", n);

    //     if (n % 2 != 0)
    //     {
    //         break;
    //     }
    // } while (n % 2 == 0);

    int n;
    do
    {
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            break;
        }
    } while (1);

    return 0;
}