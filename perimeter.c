#include <stdio.h>
int main()
{
    int a, b, peri;
    scanf("%d", &a);
    scanf("%d", &b);
    peri = 2 * (a + b);
    printf("%d \n", peri);
    int n;
    scanf("%d", &n);
    int cube = n * n * n;
    printf("%d", cube);
    return 0;
}