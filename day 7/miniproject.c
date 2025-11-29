#include <stdio.h>
#include <string.h>

#define MAX 50 // Maximum number of employees

// ================= STRUCTURE =================
struct Employee
{
    int id;              // Employee ID
    char name[30];       // Employee Name
    char department[30]; // Department
    float salary; 
    char adr       // Salary
};

// Global array of structures
struct Employee employees[MAX];
int count = 0; // Number of employees stored

// Function to clear input buffer
void clearBuffer()
{
    while (getchar() != '\n')
        ;
}

// ================= FUNCTION DECLARATIONS =================
void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

// ================= MAIN FUNCTION =================
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== EMPLOYEE RECORD SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer();

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            displayEmployees();
            break;
        case 3:
            searchEmployee();
            break;
        case 4:
            updateEmployee();
            break;
        case 5:
            deleteEmployee();
            break;
        case 6:
            printf("Exiting Employee Record System. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

// ================= ADD EMPLOYEE =================
void addEmployee()
{
    if (count >= MAX)
    {
        printf("Employee limit reached!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &employees[count].id);
    clearBuffer();

    printf("Enter Name: ");
    fgets(employees[count].name, sizeof(employees[count].name), stdin);
    employees[count].name[strcspn(employees[count].name, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(employees[count].department, sizeof(employees[count].department), stdin);
    employees[count].department[strcspn(employees[count].department, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &employees[count].salary);
    clearBuffer();


    count++;
    printf("Employee added successfully!\n");
}

// ================= DISPLAY EMPLOYEES =================
void displayEmployees()
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n%-10s %-30s %-20s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < count; i++)
    {
        printf("%-10d %-30s %-20s %-10.2f\n",
        employees[i].id,
        employees[i].name,
        employees[i].department,
        employees[i].salary);
    }
}

// ================= SEARCH EMPLOYEE =================
void searchEmployee()
{
    int id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    clearBuffer();

    for (int i = 0; i < count; i++)
    {
        if (employees[i].id == id)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee not found.\n");
}

// ================= UPDATE EMPLOYEE =================
void updateEmployee()
{
    int id;
    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);
    clearBuffer();

    for (int i = 0; i < count; i++)
    {
        if (employees[i].id == id)
        {
            printf("Enter new name: ");
            fgets(employees[i].name, sizeof(employees[i].name), stdin);
            employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

            printf("Enter new department: ");
            fgets(employees[i].department, sizeof(employees[i].department), stdin);
            employees[i].department[strcspn(employees[i].department, "\n")] = '\0';

            printf("Enter new salary: ");
            scanf("%f", &employees[i].salary);
            clearBuffer();

            printf("Record updated successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

// ================= DELETE EMPLOYEE =================
void deleteEmployee()
{
    int id;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);
    clearBuffer();

    for (int i = 0; i < count; i++)
    {
        if (employees[i].id == id)
        {
            for (int j = i; j < count - 1; j++)
            {
                employees[j] = employees[j + 1]; // shift records left
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}