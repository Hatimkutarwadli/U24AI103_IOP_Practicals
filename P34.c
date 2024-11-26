#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n); 

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a); 
        int c = a + b; 
        a = b; 
        b = c; 
    }
    return 0; 
}