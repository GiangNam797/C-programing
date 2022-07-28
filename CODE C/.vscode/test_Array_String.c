#include <stdio.h>

// function declaration
void nhapmang();
void xuatmang();

// the main method
int main()
{
    // Create variables
    int N;
    int a[100], b[100];
    int i = 0;

    printf("nhap 1 so tu nhien N: ");
    scanf("%d", &N);

    int iMang[100];
    nhapmang(iMang, N);
    xuatmang(iMang, N);
    /*
        Nhập giá trị vào mảng khi chưa biết size của mảng
        do
        {
            printf("nhap gia tri mang a[%d] = ", i++);
            scanf("%d", &a[i]);
          // i=i+1;

        } while (a[i] > 0);{

        }

        for (int j = 1; j < i; ++j)
        {
            printf("\nPhan tu a[%d] = %d", j, a[j]);
        }
    */
    return 0;
}

// function difinition
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nnhap gia tri mang a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}

// hàm nhập 1 dãy các số dương và tính tổng tất cả số đó
