#include <stdio.h>
#include <stdlib.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    int* pt,N;
    pt = (int* ) calloc(5, sizeof(int));

    /* Khi dùng calloc, giá trị khởi tạo ban đầu cho con trỏ là bằng 0 */
    printf("Gia tri cua con tro khi chua gan gia tri");
    for (int i = 0; i < 5; i++)
        printf("\np[%d] = %d", i, *(pt+i));
    printf("\n");

    printf("Gia tri cua con tro khi gan gia tri");
    for (int i = 0; i < 5; i++)
    {
        *(pt + i ) = i;
        printf("\np[%d] = %d", i, *(pt+i));
    }
    printf("\n");
    printf("In gia tri cua vung nho");
    for (int i = 0; i < 5; i++)
        printf("\ngia tri p[%d] = %d", i, *(pt+i));
    printf("\n");
    printf("\nCap phat them bo nho.\nSo phan tu them vao la N = ");
    scanf("%d", &N);
    pt = (int* )realloc(pt , N*sizeof(int));

    for (int i = 5; i < 5+N; i++)
    {
        *(pt + i ) = i;
        printf("\np[%d] = %d", i, *(pt+i));
    }
    printf("\n\nIn gia tri cua vung nho sau khi cap phat them.");

    for (int i = 0; i < 5 + N; i++)
    {
        printf("\ngia tri p[%d] = %d", i, *(pt+i));
    }
    free(pt);
    // for (int i = 0; i < 5 + N; i++)
    // {
    //     printf("\ngia tri p[%d] = %d", i, *(pt+i));
    // }
    return 0;
}

// function difinition
