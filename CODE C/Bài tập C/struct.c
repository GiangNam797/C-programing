#include <stdio.h>
#include <string.h>
// function declaration

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
    Hocvien* dsHocvien, hv;
    dsHocvien = &hv;
    strcpy(dsHocvien->ten, "Hoang Giang");
    dsHocvien->namsinh = 1999;
    dsHocvien->diemTB = 9.98;

    printf("\n");
    printf("Ten: %s ", dsHocvien->ten);
    printf("\n");
    printf("Nam sinh: %d ", dsHocvien->namsinh);
    printf("\n");
    printf("Diem TB: %0.2f", dsHocvien->diemTB);
    return 0;
}

// function difinition
