#include <stdio.h>
int main () {
    int number[10];
    int count0=0;
    int countp=0;
    int countn=0;
    for (int i=0; i<10; i++) {
        printf("Enter the Number %d: ", i+1);
        scanf("%d", &number[i]);
        if (number[i] == 0) {
            count0++;
        }
        else if (number[i]<0) {
            countn++;
        }
        else {
            countp++;
        }
    }
    printf("The Total Number of Positive Integers are: %d\n", countp);
    printf("The Total Number of Negative Integers are: %d\n", countn);
    printf("The Total Number of Zero Elements are: %d", count0);
}