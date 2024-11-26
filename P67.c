#include <stdio.h>
int main () {
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    printf("Program to Subtract 2 Matrices and Store in 3rd.\n");
    printf("Enter the Value of Matrix 1: \n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++){
            printf("Enter the Value at (%d,%d): ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the Value of Matrix 2: \n");
    for (int k=0; k<3; k++) {
        for (int l=0; l<3; l++){
            printf("Enter the Value at (%d,%d): ", k+1, l+1);
            scanf("%d", &m2[k][l]);
        }
    }
    for (int m=0; m<3; m++) {
        for (int n=0; n<3; n++){
            m3[m][n] = m1[m][n] - m2[m][n];
        }
    }
    printf("The Answer is: \n");
    for (int o=0; o<3; o++) {
        for (int p=0; p<3; p++) {
            printf("%d \t", m3[o][p]);
        }
        printf("\n");
    }
}