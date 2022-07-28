#include <stdio.h>

// function declaration
void myFunction1();
void myFunction2();
int myFunction3();
int myFunction4();


// the main method
int main()
{
    int iResult;
    myFunction1();
    myFunction2("Giang", 23, "student");
    iResult = myFunction3(9, 10);
    printf("\nTest funtion: %d", iResult);
    myFunction4(10,20,90);
    return 0;
}

// function difinition
void myFunction1()
{
    for (int i; i <= 10; i++)
    {
        printf(" * ");
    }
}
void myFunction2(char name[], int age, char job[])
{
    printf("\nInfor: \n Name: %s\n Age: %d\n Job: %s", name, age, job);
}

int myFunction3(int a, int b)
{
    return a * b;
}

int myFunction4(int a, int b, int c){
    printf("\nTich cua %d, %d va %d la: %d", a,b,c,a*b*c);
    // return 1;
}