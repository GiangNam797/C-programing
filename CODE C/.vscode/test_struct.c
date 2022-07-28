#include <stdio.h>

// function declaration

//Struct declaration

struct person
{
    char *ten;
    int tuoi;
    int mssv;
    char *job; 
};

// the main method
int main()
{
    // Create variables
    struct person personSV, *personSV1;
    personSV.ten = "Giang";
    personSV.tuoi = 23;
    personSV.mssv = 1751050063;
    personSV.job = "Automation engineer";
    personSV1 = &personSV;
    printf("\nMy infor insists of : \nTen: %s\nTuoi: %d\nMSSV: %d\nJob: %s", personSV.ten, personSV.tuoi, personSV.mssv, personSV.job);
    printf("\n\n\nMy infor insists of : \nTen: %s\nTuoi: %d\nMSSV: %d\nJob: %s", personSV1->ten, personSV1->tuoi, personSV1->mssv, personSV1->job);

    return 0;
}

// function difinition
