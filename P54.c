#include <stdio.h>
int main () {
    int number[10];
    int sum =0;
    printf("This Program is to Enter numbers in an Array.\n");
    for (int i=0; i<10; i++) {
        printf("Enter the Number: ");
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    printf("The Sum of Numbers is: %d", sum);
}