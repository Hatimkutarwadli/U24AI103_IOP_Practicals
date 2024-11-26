#include <stdio.h>
int main () {
    int number[3][3];
    int sum1=0,sum2=0,sum3=0;
    printf("Program to Find Sum of Rows of Matrices.\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter the Value at (%d,%d): ", i+1, j+1);
            scanf("%d", &number[i][j]);
            if (i==0) {
                sum1= sum1 + number[i][j];
            }
            else if (i==1) {
                sum2 = sum2 + number[i][j];
            }
            else if (i==2) {
                sum3 = sum3 + number[i][j];
            }
        }
    }
    printf("The Sum of Row 1 is: %d\n", sum1);
    printf("The Sum of Row 2 is: %d\n", sum2);
    printf("The Sum of Row 3 is: %d\n", sum3);
}