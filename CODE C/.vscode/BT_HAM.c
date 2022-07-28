#include <stdio.h>

// function declaration
int tinhtong();
int timsochiahet();
// the main method
int main()
{
    int N;
    printf("nhap 1 so tu nhien n: ");
    scanf("%d", &N);
    printf("\nTong cac so tu 0 to %d la %d", N, tinhtong(N));
    printf("\nCac so chia het cho 3 trong khoang [0; %d] la: \n ", N);
    timsochiahet(N);
    return 0;
}

// function difinition
int tinhtong(int n)
{
    int iSum = 0;
    for (int i = 0; i <= n; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}

int timsochiahet(int n) // tìm số chia hết cho 3 từ 1 số nhập từ keypad và in ra screen
{
    int i = 0;
    for (i; i <= n; i++)
    {
        if (i % 3 == 0)
            printf("\t %d", i);
    }
    return 0;
}
