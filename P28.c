#include <stdio.h>
#include <math.h>
int main () {
    int n=0;
    int num; 
    int digit;
    int sum=0;
    int s;
    printf("Enter the Number: ");
    scanf("%d", &num);
    s = num;
    while (s != 0) {
        s = s/10;
        n++;
    }
    s = num;
    while (s != 0) {
        digit = s%10;
        int pp = pow(digit, n);
        sum = sum + pp;
        s = s/10;
    }
    if (sum == num) {
        printf("This Number is a Armstrong Number.");
    }
    else {
        printf("This Number is Not a Armstrong Number.");
    }
    return 0;
}




