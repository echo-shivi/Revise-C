#include <stdio.h>
// ya arr[] box brackette notation likho ya  *arr output wahi aata h
void printNum(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 455, 5};
    printNum(arr, 5);
    return 0;
}

void printNum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}