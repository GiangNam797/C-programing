#include <stdio.h>
#define K 100
// function declaration
void nhapmang2c();
void xuatmang2c();

// the main method
int main()
{
    // Create variables
    int N,M;
    int iArr[K][K] = {};

    printf("nhap 1 so hang M: ");
    scanf("%d", &M);
    printf("\nnhap 1 so cot N: ");
    scanf("%d", &N);

    nhapmang2c(iArr, M, N);
    xuatmang2c(iArr, M, N);
    return 0;
}

// function difinition
void nhapmang2c(int a[][K], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nnhap gia tri a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatmang2c(int a[][K], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);           
        }
        printf("\n");
    }
}