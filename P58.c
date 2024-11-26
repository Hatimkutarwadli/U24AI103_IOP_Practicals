#include <stdio.h>
int main () {
    int number[10][3];
    for (int j=0; j<2; j++){
        printf("Enter the Number for Series %d:\n", j+1);
        for (int i=0; i<10; i++) {    
            printf("Enter the Number %d: ", i+1);
            scanf("%d", &number[i][j]);
        }
    }
    for (int k=0; k<10; k++) {
        number[k][2] = number[k][0]+number[k][1];
        printf("The Answer to %d is: %d\n", k+1, number[k][2]);
    }
}