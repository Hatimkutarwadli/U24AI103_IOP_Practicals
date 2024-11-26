#include <stdio.h>
int main () {
    int n;
    int rem;
    int p=0;
    printf("This Program is to check wheater a number is prime or composite!!\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i=2; i<n; i++) {
        rem = n%i;
        if (rem==0) {
            p = i;
            printf("This Number is a Composite Number.");
            break;
        }
    }
    if (p==0) {
        printf("This Number is a Prime Number.");
    }
    
}