// break ka kaam jv vhi aapko apne for , while , o while loop ko bikul kaat dena h tv
// #include <stdio.h>
// int main()
// {
    //     for (int i = 1; i <= 5; i++)
    //     {
    //         if (i == 3)
    //         {
    //             break;
    //         }
    //         printf("%d \n", i);
    //     }
    //     printf("end");
    //     return 0;
    // }

    // continue statement - to skip to next iteration

#include <stdio.h>

    int main()
    {
        for (int i = 1; i <= 5; i++)
        {
            if (i == 3)
            {
                continue;
            }
            printf("%d \n", i);
        }

        return 0;
    }