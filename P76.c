#include <stdio.h>

void eo (int n) {
    if (n%2 == 0) {
        printf("This is a Even Number.");
    }
    else {
        printf("This is a Odd Number.");
    }
}

int main () {
    int n;
    printf("This Is the Program to find Even or Odd.\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    eo(n);
}