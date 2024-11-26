#include <stdio.h>
int main () {
    int n1[5] = {1,2,3,4,5};
    int n2[5];
    int *ptr = n1;
    // Assigning values to n2.
    for (int i=4; i>=0; i--) {
        n2[i] = *ptr;
        ptr++; 
    }
    // Printing values of n2.
    for (int i=0; i<5; i++) {
        printf("%d\t", n2[i]);
    }
}