#include <stdio.h>
int main () {
    int number[10];
    int counteven = 0;
    int countodd = 0;
    printf("This Program is to Find Total Number of Even and Odd Integers.\n");
    for (int i=0; i<10; i++) {
        printf("Enter the %d Number: ", i+1);
        scanf("%d", &number[i]);
        if (number[i]%2 == 0) {
            counteven++;
        }
        else {
            countodd++;
        }
    }
    printf("The Number of Even Numbers are: %d\n", counteven);
    printf("The Number of Odd Numbers are: %d", countodd);
}