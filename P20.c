#include <stdio.h>
int main () {
    float a;
    float b;
    int c;
    printf("Welcome to a Simple Calculator!\n");
    printf("Enter the First Number: \n");
    scanf("%f", &a);
    printf("Enter the Second Number: \n");
    scanf("%f", &b);
    printf("Select The Operators and Write their serial Number: \n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division \n");
    scanf("%d", &c);
    switch (c) {
        case 1:
        printf("The Answer is: %f", a+b);
        break;
        case 2:
        printf("The Answer is: %f", a-b);
        break;
        case 3:
        printf("The Answer is: %f", a*b);
        break;
        case 4:
        printf("The Answer is: %f", a/b);
        break;
        default:
        printf("The Number entered is invalid.");
    }
    return 0;
}