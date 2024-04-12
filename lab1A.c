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

//PartA function 1:
void saveEmployees (Employees info[NUM_EMP], int c, char fileName[SIZE]){

    FILE *employeeDataFile = fopen(fileName, "w");

    for(int i = 0; i < c; i++){

        printf("Please enter name of employee (%d): ", i+1);
        scanf("%s",info[i].fname);

        printf("Please enter the last name of employee (%d): ", i+1);
        scanf("%s",info[i].lname);


        printf("Please enter ID of employee (%d): ",i+1);
        scanf("%d",&info[i].id);

        printf("Please enter dependents of employee (%d): ",i+1);
        for(int j = 0; j < 3; j++){
            scanf("%s",info[i].dependents[j]);
        }

        fprintf(employeeDataFile,"%s %d %s %s %s\n" ,info[i].lname,info[i].id,info[i].dependents[0],info[i].dependents[1],info[i].dependents[2] );
    }

}

//PartA function 2:
int loadEmployees (Employees data[NUM_EMP], char fileName[SIZE]){

    FILE *employeeDataFile = fopen(fileName, "r");
    if (employeeDataFile == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    else{
        for(int i = 1; i <= 3; i++){
            fscanf(employeeDataFile,"%s %d %s %s %s" ,data[i].lname,&data[i].id,data[i].dependents[0],data[i].dependents[1],data[i].dependents[2] );
        }
    }
    fclose(employeeDataFile);
    return 0;
}