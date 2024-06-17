#include <stdio.h>
#include <stdlib.h>
int main()
{
    // dma-- runtime
    // 4
    // malloc()--memory alloocation --import #include <stdlib.h>
    // no of bytes to be allocated & returns a pointer of type void
    // sizeof()--returns size of datatype
    //  malloc(5*sizeof(int)); ---void type of pointer
    // pr mujhe toh int pointer chahiye tha
    //  int type ka pointer--    ptr = (int*)malloc(5 * sizeof(int));
    // 5--byte
    /*
        int *ptr;
        int n;
        scanf("%d", &n);

        ptr = (int *)malloc(n * sizeof(int));

        ptr[0] = 1;
        ptr[1] = 1;
        ptr[2] = 1;
        ptr[3] = 1;

        for (int i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }
        */
    // calloc()--continuous allocation---jv vhi null values assign karni h
    // initializes with zero [0,0,0,0,0]
    // 5---location --calloc(5, sizeof(float));

    float *ptr;
    ptr = (float *)calloc(5, sizeof(float));

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%f \n", ptr[i]);
    // }

    // free()-- mem by malloc&calloc free nhi hoti h
    free(ptr);
    ptr = (float *)calloc(2, sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("%f \n", ptr[i]);
    }

    // realloc()--increase or decrease memory using the same pointer & size
    // relloc(ptr, nya size)
    ptr = realloc(ptr, 8);
    for (int i = 0; i < 8; i++)
    {
        scanf("%f \n", &ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%f \n", ptr[i]);
    }
}