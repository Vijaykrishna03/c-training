#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define MAX_EMPLOYEES 100
struct Employee {
    int empID;
    char name[100];
    char department[50];
    char designation[50];
    float salary;
};
void addEmployee(struct Employee* database, int* numEmployees) {
    if (*numEmployees >= MAX_EMPLOYEES) {
        printf("Database is full. Cannot add more employees.\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d",&database[*numEmployees].empID);
    printf("Enter Name: ");
    scanf("%s", database[*numEmployees].name);
    printf("Enter Department: ");
    scanf("%s", database[*numEmployees].department);
    printf("Enter Designation: ");
    scanf("%s", database[*numEmployees].designation);
    printf("Enter Salary: ");
    scanf("%f", &database[*numEmployees].salary);

    (*numEmployees)++;
    printf("Employee added successfully!\n");
}
void displayEmployees(const struct Employee* database, int numEmployees) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee ID: %d\n", database[i].empID);
        printf("Name: %s\n", database[i].name);
        printf("Department: %s\n", database[i].department);
        printf("Designation: %s\n", database[i].designation);
        printf("Salary: %.2f\n", database[i].salary);
        printf("-------------------------\n");
    }
}

void updateEmployee(struct Employee* database, int numEmployees, int empID) {
    for (int i = 0; i < numEmployees; i++) {
        if (database[i].empID == empID) {
            printf("Enter updated Name: ");
            scanf("%s", database[i].name);
            printf("Enter updated Department: ");
            scanf("%s", database[i].department);
            printf("Enter updated Designation: ");
            scanf("%s", database[i].designation);
            printf("Enter updated Salary: ");
            scanf("%f", &database[i].salary);
            printf("Employee information updated successfully!\n");
            return;
        }
    }
    printf("Employee with ID %d not found.\n", empID);
}


int main() {
    struct Employee employeeDB[MAX_EMPLOYEES];
    int numEmployees = 0;
    int choice, empID;
    while (1) {
        printf("\nEmployee Database Management System\n");
        printf("1. Add New Employee\n");
        printf("2. Display Employee Details\n");
        printf("3. Update Employee Information\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                int temp=numEmployees;
                addEmployee(employeeDB, &numEmployees);
                if(temp==numEmployees) return 0;
                break;
            case 2:
                displayEmployees(employeeDB, numEmployees);
                break;
            case 3:
                printf("Enter Employee ID to update: ");
                scanf("%d", &empID);
                updateEmployee(employeeDB, numEmployees, empID);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                return 0;
        }
    }

    return 0;
}
