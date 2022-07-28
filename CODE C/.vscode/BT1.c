/*
    Viết chương trình c tìm n số Fibonacci đầu tiên.

    Quy luật của dãy số Fibonacci: số tiếp theo bằng tổng của 2 số trước, 2 số đầu tiên của dãy số là 0, 1.

    Ví dụ: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
*/
#include <stdio.h>

// function declaration
int fibo();
// Struct declaration

// the main method
int main()
{
    int N;
    // Create variables
    printf("\nnhap 1 so phan tu N: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}

// function difinition
int fibo(int N)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    if (N < 0)
    {
        /* code */
        return -1;
    }
    else if (N == 0 || N == 1)
    {
        /* code */
        return N;
    }
    else
    {
        for (int i = 2; i < N; i++)
        {
            /* code */
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
        
        printf("* ");
        return fn;
    }
}
