#include <stdio.h>

int main() {
    int choice;
    char name[20] = "Rahul";
    int id = 101;
    int salary = 25000;

    printf("** Mini Employee Management System **\n");
    printf("1. View Employee\n");
    printf("2. Add Employee\n");
    printf("3. Delete Employee\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Employee ID: %d\n", id);
            printf("Employee Name: %s\n", name);
            printf("Salary: %d\n", salary);
            break;

        case 2:
            printf("Employee Added Successfully\n");
            break;

        case 3:
            printf("Employee Deleted Successfully\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}