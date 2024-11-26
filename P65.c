#include <stdio.h>
int main () {
    int number[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            printf("Enter the Value at (%d,%d): ", i+1, j+1);
            scanf("%d", &number[i][j]);
        }
    }
    printf("Transpose of Matrice is: \n");
    for (int k=0; k<3; k++) {
        for (int j=0; j<3; j++) {
            printf("%d \t", number[j][k]);
        }
        printf("\n");
    }
}