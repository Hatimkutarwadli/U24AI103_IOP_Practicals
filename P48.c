#include <stdio.h>
int main () {
    int rows;
    printf("Enter the Rows: ");
    scanf("%d", &rows);
    for (int i =0; i<rows; i++){
        for (int j = rows-1; j>=i; j--) {
            printf(" ");
        }
        for (int k = 0; k<=i;  k++){
            printf("%d", k+1);
        }
        printf("\n");
    }
}