#include <stdio.h>
void square(int n);
void _square(int *n);

int main()
{

    int num = 4;
    square(num);
    printf("%d !!", num);
    _square(&num);
    printf("%d !!", num);
    return 0;
}

// cbv
void square(int n)
{
    n = n * n;
    printf("%d square ", n);
}

// cba
void _square(int *n)
{
    *n = (*n) * (*n); // 4*4
    printf("%d square ", *n);
}