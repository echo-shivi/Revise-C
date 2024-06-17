#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int ret = factorial(n);
    printf("%d", ret);
    return 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int facpv = factorial(n - 1);
    int fac = facpv * n;
    return fac;
}

// Recursion props
// a. Anything that can be done with iteration can be done with recursion and vice-versa
// b.Recursion can sometimes give the most simple solution
// c.Base Case is the condition which stops recursion
// d.iteration has infinite loop & recurion has stack overflow