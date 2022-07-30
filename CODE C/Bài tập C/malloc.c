#include <stdio.h>
#include <stdlib.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    int* pt, sum;
    pt = (int*) malloc(5*sizeof(int));

    // Nếu không thể cấp phát, 
    // hàm malloc sẽ trả về con trỏ NULL
    if (pt == NULL)
    {
        printf("Co loi! khong the cap phat bo nho.");
        exit(0);
    }
    /* Khi dùng malloc, giá trị khởi tạo ban đầu cho con trỏ là các giá trị rác*/
    for (int j = 0; j <5 ; j++)
    {
        /* code */
        printf("\ngia tri thu p[%d] = %d ", j, *(pt+j));
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        /* code */
       *(pt+i) = i;
       printf("\ngia tri thu p[%d] = %d ", i, *(pt+i));
    }

    printf("\n");

    for (int j = 0; j <5 ; j++)
    {
        /* code */
        printf("\ngia tri thu p[%d] = %d ", j, *(pt+j));
    }

    free(pt);
    printf("\n");

    /* Sau khi giải phóng bộ nhớ cấp phát cho con trỏ thì giá trị tại nơi con trỏ 
    trỏ đến là giá trị rác*/
    for (int j = 0; j <5 ; j++)
    {
        /* code */
        printf("\ngia tri thu p[%d] = %d ", j, *(pt+j));
    }

    return 0;
}

// function difinition
