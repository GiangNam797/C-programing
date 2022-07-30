#include <stdio.h>
#include <stdlib.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    int* pt;
    pt = (int* ) calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("\ngia tri p[%d] = %d", i, *(pt+i));

    }
    printf("\n");
        /* Khi dùng calloc, giá trị khởi tạo ban đầu cho con trỏ là bằng 0 */

    for (int i = 0; i < 5; i++)
    {
        /* code */
        *(pt + i ) = i;
        printf("\ngia tri p[%d] = %d", i, *(pt+i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("\ngia tri p[%d] = %d", i, *(pt+i));
    }
    
    free(pt);
     printf("\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("\ngia tri p[%d] = %d", i, *(pt+i));
    }
    return 0;
}

// function difinition
