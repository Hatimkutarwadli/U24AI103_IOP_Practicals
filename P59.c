#include <stdio.h>
int main () {
    int number[10][2];
    int c=0;
    for (int j=0; j<2; j++) {
        for(int i=0; i<10; i++) {
            printf("Enter the Number %d: ", i+1);
            scanf("%d", &number[i][j]);
        }
    }
    for (int k=0; k<10; k++) {
        c = number[k][0];
        number[k][0] = number[k][1];
        number[k][1] = c;
    }
    for (int l=0; l<10; l++) {
        printf("The New Number of Series 1 are: %d\n", number[l][0]);
    }
    for (int m=0; m<10; m++) {
        printf("The New Number of Series 2 are: %d\n", number[m][1]);
    }
    
}