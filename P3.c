#include <stdio.h>
#include <math.h>
int main () {
    float b;
    float h;
    float o;
    float g;
    printf("Enter Your Base Salary: \n");
    scanf("%f", &b);
    printf("Enter Your HRA: \n");
    scanf("%f", &h);
    printf("Enter the Other Allowances: \n");
    scanf("%f", &o);
    g=b+h+o;
    printf("%f", g);
    return 0;
}