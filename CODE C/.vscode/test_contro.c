#include <stdio.h>

// function declaration
void add();

// the main method
int main()
{
    // Create variables
    int a[] = {1, 2, 3, 4, 5};
    int *ptr = a;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", *(ptr+i)+10);
    // }
    // printf("\n");
    // for (; ptr < &a[5]; ptr++)
    // {
    //     printf("%d ", *ptr);
    // }
    add(20, a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

// function difinition
void add(int K, int A[5])
{
    int *ptr = A;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        A[i] = *(ptr + i) + K;
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}