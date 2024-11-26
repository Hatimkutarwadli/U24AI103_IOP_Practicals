#include <stdio.h>
int fibonacci(int n);
int main () {
    int n;
    printf("Enter Till When Fibonacci series is required: ");
    scanf("%d", &n);
    fibonacci(n);
}
int fibonacci (int n) {
    if (n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a); 
        int c = a + b; 
        a = b; 
        b = c; 
    }   
    }
}