#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000
#define MAX_EMPLOYEES_TIME 1000

char g_adminPassword[9] = "12345678"; // admin password
bool g_status = false; // employee checking status

struct Employee // Struct to hold employee salary information
{
    unsigned short id;
    char fullName[25];
    unsigned int basicSalary; 
};

struct EmployeeTime // Struct to hold employee working time information
{
    unsigned short id;
    char fullName[25];
    float timeRecord; // the working time recorded from empoyee
    unsigned short timeStatus; // the working time status (in/out) 
};

// Function Declaration
void MainMenu();
void AdminModeMenu();
void DecodePassword();
void ChangeAdminPassword();
void LoadEmployees(struct Employee employees[], unsigned short* numEmployees);
void AddEmployee(struct Employee employees[], unsigned short* numEmployees); 
void ViewEmployeeInfo(struct Employee employees[], unsigned short numEmployees);
void LoadEmployeesTime(struct EmployeeTime employeesTime[], unsigned short* numEmployeesTime); 
void ViewWorkingTime(struct EmployeeTime employeesTime[], unsigned short numEmployeesTime); 
void CalculateSalaries(struct EmployeeTime employeesTime[], unsigned short numEmployeesTime, struct Employee employees[], unsigned short numEmployees); 
void NormalModeMenu();
void RecordTime(struct Employee employees[], unsigned short numEmployees, unsigned short mode); 