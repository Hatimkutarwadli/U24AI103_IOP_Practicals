#include <stdio.h>
int main () {
    int number[3][3];
    int max=-1000; int min=0;
    printf("Program to Find Max and Min for a 3*3 Matrices.\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter the Value at (%d,%d): ", i+1, j+1);
            scanf("%d", &number[i][j]);
             if (i==0 && j==0) {
                min = number[0][0];
             }
             if (number[i][j] > max) { 
             max = number[i][j];
            }
             if (number[i][j] < min) {
             min = number[i][j];
            }
        }
    }
    printf("The Maximum Value is: %d\n", max);
    printf("The Minimum Value is: %d", min);
}