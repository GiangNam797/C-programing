#include <stdio.h>

// function declaration

// Struct declaration


// Enum declaration
typedef enum
{
    Monday = 2,
    Tuesday,
    Wednesday,
    Thurday,
    Friday,
    Staturday,
    Sunday
}day;

// the main method
int main()
{
    // Create variables

    int number = 0;
    int result;
    printf("Nhap 1 so: N = ");
    scanf("%d", &number);
    
    result = number % 2; 
    switch (result)
    {
    case 0:
        /* code */
        printf("\nN la 1 so chia het cho 2");
        break;
    case 1:
        printf("\nN la 1 so ko chia het cho 2");
        break;
    default:
        break;
    }
    day ngay;
    ngay = Tuesday;
    printf("\nTuesday la thu %d", ngay);

    return 0;

}

// function difinition
