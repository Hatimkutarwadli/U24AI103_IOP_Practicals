#include <stdio.h>
#include <stdlib.h>
struct employee {
    int empnumber;
    char empname[50];
    float basicpay;
};
int main () {
    struct employee employ[50];
    struct employee *ptr;
    int n;
    printf("Enter the Number of Employee: ");
    scanf("%d", &n);
    if (n > 50 || n <= 0) {
        printf("Invalid number of employees. Please enter a number between 1 and 50.\n");
        return 1;
    }
    ptr = employ; 
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &(ptr + i)->empnumber);
        printf("Employee Name: ");
        scanf(" %[^\n]s", (ptr + i)->empname);
        printf("Basic Pay: ");
        scanf("%f", &(ptr + i)->basicpay);
    }
    printf("\nEmployee Details:\n");
    printf("------------------------------------------------------\n");
    printf("Emp Number\tEmp Name\t\tBasic Pay\n");
    printf("------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d\t%-20s\t%.2f\n", (ptr + i)->empnumber, (ptr + i)->empname, (ptr + i)->basicpay);
    }
    printf("------------------------------------------------------\n");

    return 0;
}