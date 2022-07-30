#include <stdio.h>
#include <string.h>
// function declaration
typedef char uint8_t;
typedef short int uint16_t;
typedef int uint32_t;

// Struct declaration
typedef struct {
    char ten[30];
    int namsinh;
    float diemTB;
}Hocvien;
// the main method
int main()
{
    // Create variables
    uint8_t x;
    uint16_t y;
    uint32_t z;
    Hocvien* dsHocvien, hv, dsHocvien1;
    dsHocvien = &hv;
    strcpy(dsHocvien->ten, "Hoang Giang");
    dsHocvien->namsinh = 1999;
    dsHocvien->diemTB = 9.98;

    printf("\tTen: %s ", dsHocvien->ten);
    printf("\n\tNam sinh: %d ", dsHocvien->namsinh);
    printf("\n\tDiem TB: %0.2f", dsHocvien->diemTB);
    printf("\n\tsize of int x: %d", sizeof(x));
    printf("\n\tsize of int y: %d", sizeof(y));
    printf("\n\tsize of int z: %d", sizeof(z));

    return 0;
}

// function difinition
