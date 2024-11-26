#include <stdio.h>

int main () {
    int n; 
    int max;
    int num;
    int min;
    printf("Enter how Many numbers would you like to Enter: ");
    scanf("%d", &n);
    printf("Enter the 1 Number: ");
    scanf("%d", &num);
    max = num;
    min = num;
    for (int i = 1; i < n; i++) {
        printf("Enter the %d Number: ", i+1);
        scanf("%d", &num);
         
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("The Maximum Number is: %d\n", max);
    printf("The Minimum Number is: %d", min);
}