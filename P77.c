#include <stdio.h>

int palindrome (int n, int digit, int s) {
    int rn; 
    while (n > 0) {
        digit = n%10;
        rn = rn*10 + digit;
        n = n/10;
    }
    if (rn == s) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int n;
    int digit;
    int s;
    printf("This Program is to Check a Number is Palindrome or Not.\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    s = n;
    if (palindrome(n,digit,s)) {
        printf("%d is a Palindrome Number.", s);
    }
    else {
        printf("%d is NOT a Palindrome Number.", s);
    }
}