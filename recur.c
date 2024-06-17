#include <stdio.h>

// int printHey(int count);

// int main()
// {
//     printHey(10);
//     return 0;
// }
// // recursion
// int printHey(int count)
// {
//     if (count == 0)
//     {
//         return 0;
//     }
//     printf("hellow World \n");
//     printHey(count - 1);
// }

// int firstNatural(int n);
// int sumNat(int n);
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     // firstNatural(n);
//     int ret = sumNat(n);
//     printf("%d", ret);
//     return 0;
// }

// int firstNatural(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     printf("%d", n);
//     firstNatural(n - 1);
// }

// int sumNat(int n)
// {

//     if (n == 0)
//     {
//         return n;
//     }

//     return n + sumNat(n - 1);
// }

int sum(int n);

int main()
{
    printf("sum is:%d", sum(5));
    return 0;
}

int sum(int n)
{
    // bc
    if (n == 1)
    {
        return 1;
    }
    // prev+n
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}

// sum(5)
// sum(4)+5
// sum(3)+4
// sum(2)+3
// sum(1)+2
// 1