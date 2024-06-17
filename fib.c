#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ret = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, ret);
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
