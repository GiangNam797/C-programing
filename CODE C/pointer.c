#include <stdio.h>

// function declaration

// Struct declaration

// the main method
int main()
{
    // Create variables
    int *p = NULL, c = 10;
    printf("gia tri cua c la %d", c);
    printf("\ndia chi cua c la %d ", &c);
    printf("\n");

    p = &c;
    printf("\ndia chi cua con tro p la %d", &p);
    printf("\ngia tri cua con tro la %d", p);
    printf("\ngia tri tai noi con tro tro toi la %d", *p);
    printf("\n");

    c=100;
    printf("\n gia tri cua c khi cho c = 100 la %d", c);
    
    printf("\n gia tri tai noi ma con tro tro toi la %d", *p);
    printf("\ndia chi cua con tro p la %d", &p);
    printf("\ngia tri cua con tro la %d", p);

    printf("\n");
    *p = 1000;
     printf("\n gia tri cua c khi cho *p = 1000 la %d", c);
    
    printf("\n gia tri tai noi ma con tro tro toi la %d", *p);
    return 0;
}

// function difinition
