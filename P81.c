#include <stdio.h>
int prime(int n);
int main() { 
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("The Result is: %d", prime(n));
}

int prime (int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}