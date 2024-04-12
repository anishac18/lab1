#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 25
#define NUM_EMP 3

typedef struct employee{
    char fname[20];
    char lname[20];
    int id;
    char dependents [3][20]; // assume that employees have exactly
    // 3 registered dependents
} Employees;

void saveEmployees (Employees info[NUM_EMP], int c, char fileName[SIZE]);
int  loadEmployees (Employees [NUM_EMP], char [SIZE]);
void printEmployees(Employees data[NUM_EMP],int c);
void swapEmployees(Employees *ptr1, Employees *ptr2);

//Main function
int main(int argc, char *argv[SIZE]){

    char employeeFile[SIZE];
    Employees info[NUM_EMP];
    Employees data[NUM_EMP];

    int c = 3;
    strcpy(employeeFile, argv[1]);

    saveEmployees(info,c,employeeFile);
    loadEmployees(data,employeeFile);
    printEmployees(info,c);


    
    
    swapEmployees(&info[0], &info[1]);
    printf("\n\n after \n\n");
printEmployees(info,c);
    

    
}
