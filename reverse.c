// #include <stdio.h>
// void rev(int *arr, int n);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     rev(arr, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// void rev(int *arr, int n)
// {

//     for (int i = 0; i < n / 2; i++)
//     {
//         int first = arr[i];
//         int second = arr[n - i - 1];
//         arr[i] = second;
//         arr[n - i - 1] = first















//     }
// }

#include <stdio.h>

void rev(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rev(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void rev(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        // Swap the elements
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
