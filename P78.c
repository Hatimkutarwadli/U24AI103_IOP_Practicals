#include <stdio.h> 
#include <math.h>
int armstrong(int num, int s) {
    int n=0;
    int digit;
    int sum = 0;
    while (s > 0){
        s = s/10;
        n = n+1;
    }
    s = num;
    while (s > 0) {
        digit = s%10;
        sum = sum + pow(digit,n);
        s = s/10;
    }
    if (sum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int num;
    int s;
    printf("This program is to Find a Number is a Armstrong Number or Not.\n");
    printf("Enter the Number: ");
    scanf("%d", &num);
    s = num;
    if (armstrong(num,s)) {
        printf("%d is a Armstrong Number.", num);
    }
    else {
        printf("%d is NOT a Armstrong Number.", num);
    }
}