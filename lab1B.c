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

//Function definitions :

//PartB Function 1:

void printEmployees(Employees worker[NUM_EMP], int c){


      for(int i=0; i<c; i++){

          printf("Employee #%d\n",i+1);
          printf("First Name: %s\n", worker[i].fname);
          printf("Last Name: %s\n",worker[i].lname);
          printf("ID: %d \n",worker[i].id);

          for(int j = 0; j<3; j++){

            printf("Dependent #%d: %s", j+1,worker[i].dependents[j]);
            printf("\n");

          }

     }

}


//PartB function 2:

// void swapEmployees(Employees *ptr1[NUM_EMP], Employees *ptr2[NUM_EMP]){

//     Employees *temp[3];
//     *temp=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=*temp;

// }
    


void swapEmployees(Employees *emp1, Employees *emp2) {
    Employees temp = *emp1;
    *emp1 = *emp2;
    *emp2 = temp;
}


