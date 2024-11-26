#include <stdio.h>
int main () {
    int n;
    int digit;
    printf("Program to Print Reverse of a Given Number!!\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    while(n>0) {
        digit = n%10;
        printf("%d", digit);
        n = n/10;
    }
    return 0;
}