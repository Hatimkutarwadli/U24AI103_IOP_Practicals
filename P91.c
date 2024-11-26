#include <stdio.h>
#include <math.h>
int main () {
    int num;
    int *ptr;
    int square=0;
    int cube=0;
    ptr = &num;
    printf("Enter the Number: ");
    scanf("%d", ptr);
    square = (*ptr)*(*ptr);
    cube = (*ptr)*(*ptr)*(*ptr);
    printf("Square = %d\n", square);
    printf("Cube = %d", cube);
}