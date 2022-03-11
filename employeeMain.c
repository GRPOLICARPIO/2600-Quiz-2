#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void)
{ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);  
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    //defined in employeeTable.c 
    extern Employee EmployeeTable[];  
    extern const int EmployeeTableEntries;   

    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 

    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "311-555-1215"); 
    if (matchPtr != NULL) 
        printf("Employee phone 311-555-1215 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee phone 311-555-1215 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32); 
    if (matchPtr != NULL) 
        printf("Employee salary 8.32 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee salary 8.32 is NOT found in the record\n");

    return EXIT_SUCCESS; 
}