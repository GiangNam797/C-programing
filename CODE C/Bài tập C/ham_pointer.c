#include <stdio.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    char arr[5];
    char* pt;
    pt = arr;
    *pt = 'a';
    *(pt+1)='b';
    *(pt+2)='c';
    *(pt+3)='d';
    *(pt+4)='e';
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("\nGia tri cua arr[%d] = %c", i, arr[i]);
    }
    
    return 0;
}

// function difinition
