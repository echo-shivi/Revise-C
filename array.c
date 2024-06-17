#include <stdio.h>
int main()
{
    // array can be initialised in both ways
    int arr[3] = {1, 2, 3};
    int arr2s[] = {1, 12, 3};
    // pointer arithmetic
    // pointer can be incremented or ecremented

    // case1
    int age = 22;
    int *ptr = &age;
    printf("%u \n", ptr);

    ptr++;

    printf("%u \n", ptr);

    ptr = ptr + 1;
    //=>1dataype se badha do

    printf("%u \n", ptr);

    ptr--;

    printf("%u \n", ptr);

    // we can also subtract one pointer from another
    int age1[3] = {0, 1, 3};
    int *ptr1 = &age1[0]; // ptr1 points to the first element of age1
    int age2[3] = {0, 34, 6};
    int *ptr2 = &age2[0]; // ptr2 points to the first element of age2

    // Subtracting pointers pointing to different arrays is undefined behavior in C.
    // However, if you want to see the raw difference in memory addresses (for educational purposes):
    // ptrdiff_t out = ptr2 - ptr1; // ptrdiff_t is the proper type for pointer differences

    // Use %p format specifier to print pointer values
    printf("%p \n", (void *)ptr2);
    printf("%p \n", (void *)ptr1);
    // printf("%td \n", out); // %td is the correct format specifier for ptrdiff_t

    int phase = 22;
    int _phase = 23;
    int *_ptr = &phase;
    int *_ptr2 = &_phase;

    printf("difference = %u \n", _ptr - _ptr2);

    printf("comparision = %u \n", _ptr == _ptr2);
    // doubt
    // array vi pointer h
    return 0;
}