#include <stdio.h>

int main()
{
    // 1-100
    //  for (int i = 1; i <= 100; i++)
    //  {
    //      printf("%d\n", i);
    //  }
    //  return 0;

    // 100-1
    //  for (int j = 100; j > 0; j--)
    //  {
    //      printf("%d\n", j);
    //  }

    // for (float k = 1.0; k <= 5.0; k++)
    // {
    //     printf("%f \n", k);
    // }

    // a-z
    // for (char ch = 'a'; ch <= 'z'; ch++)
    // {
    //     printf("%c\n", ch);
    // }
    // for (char ch = 'A'; ch <= 'Z'; ch++)
    // {
    //     printf("%c", ch);
    // }
    // for (char ch = 'Z'; ch >= 'A'; ch--)
    // {
    //     printf("%c", ch);
    // }

    // WHILE LOOP
    // int n;
    // scanf("%d", &n);
    // int i = 0;
    // while (i <= n)
    // {
    //     printf("%d", i);
    //     i++;
    // }

    // DO WHILE-KAAM PHELE CONDITION AT LAST
    // int l = 1;
    // do
    // {
    //     printf("%d", l);
    //     l++;
    // } while (l <= 10);

    // print the sum of first n natural numbers
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("%d \n", sum);

    // for (int i = n; i > 0; i--)
    // {
    //     printf("%d", i);
    // }

    // in one loop
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // int j = n;
    // for (int i = 1; i <= j; i++)
    // {
    //     sum = sum + i; // sum+=i
    //     printf("%d \n", n);
    //     n--;
    // }
    // printf("\n %d", sum);

    // shradha
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    // {
    //     sum += i;
    //     printf("%d \n", j);
    // }
    // printf("%d", sum);

    // i vhi hata do
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int j = n; j >= 1; j--)
    {
        sum += j;
        printf("%d \n", j);
    }
    printf("%d", sum);
    return 0;
}