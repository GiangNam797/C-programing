#include <stdio.h>
#include <stdlib.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    int* pt, N;
    pt = (int*) malloc(5*sizeof(int));

    // Nếu không thể cấp phát, 
    // hàm malloc sẽ trả về con trỏ NULL
    if (pt == NULL)
    {
        printf("Co loi! khong the cap phat bo nho.");
        exit(0);
    }
    /* Khi dùng malloc, giá trị khởi tạo ban đầu cho con trỏ là các giá trị rác*/
    printf("Gia tri cua con tro khi chua gan gia tri");
    for (int j = 0; j <5 ; j++)
    {
        /* code */
        printf("\np[%d] = %d ", j, *(pt+j));
    }
    printf("\n");

    printf("Gia tri cua con tro khi gan gia tri");
    for (int i = 0; i < 5; i++)
    {
        /* code */
       *(pt+i) = i;
       printf("\np[%d] = %d ", i, *(pt+i));
    }
    printf("\n");

    printf("In gia tri cua vung nho");
    for (int j = 0; j <5 ; j++)
    {
        /* code */
        printf("\ngia tri thu p[%d] = %d ", j, *(pt+j));
    }

    printf("\n");
    printf("\nCap phat them bo nho.\nSo phan tu them vao la N = ");
    scanf("%d", &N);
    pt = (int*)realloc(pt, N * sizeof(int));
    for (int i = 5; i < 5 + N; i++)
    {
        /* code */
       *(pt+i) = i;
       printf("\np[%d] = %d ", i, *(pt+i));
    }
    printf("\nIn gia tri cua vung nho sau khi cap phat them.");
    for (int i = 0; i <5+N ; i++)
    {
        /* code */
        printf("\ngia tri thu p[%d] = %d ", i, *(pt+i));
    }
    free(pt);
    return 0;
}

// function difinition
