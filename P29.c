#include <stdio.h>

int main () {
    int n;
    int digit;
    int rn=0;
    int s;
    printf("Enter the Number: ");
    scanf("%d", &n);
    s = n;
    while (n != 0) {
        digit = n%10;
        rn = rn*10 + digit;
        n = n/10;
    }

    if (s == rn) {
        printf("This Number is a Palindrome.");
    }
    else {
        printf("This Number is Not a Palindrome.");
    }
    return 0;
}