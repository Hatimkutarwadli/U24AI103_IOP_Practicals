#include <stdio.h>
int main () {
    float a;
    float b;
    char d;
    printf("Welcome to a Simple Calculator!! \n");
    printf("Enter the First Number: \n");
    scanf("%f", &a);
    printf("Enter the Second Number: \n");
    scanf("%f", &b);
    printf("Enter the Operator: \n");
    scanf(" %c", &d);
    switch (d) {
        case '+':
        printf("The Answer is: %f", a+b);
        break;
        case '-':
        printf("The Answer is: %f", a-b);
        break;
        case '*' :
        printf("The Answer is: %f", a*b);
        break;
        case '/':
        printf("The Answer is: %f", a/b);
        break;
        default: 
        printf("The Entered Operator is Wrong.");
    }
    return 0;
}