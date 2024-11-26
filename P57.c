#include <stdio.h>
int main () {
    int number[10];
    int max1=-1000, max2=-1000;
    for (int i=0; i<10; i++) {
        printf("Enter the Number %d: ", i+1);
        scanf("%d", &number[i]);
        if(number[i] > max1) {
            max2 = max1;
            max1 = number[i];
        }
        else if (number[i] > max2 && number[i] != max1) {
                max2 = number[i];
        }
    }
    printf("The First Maximum Number is %d.\n", max1);
    printf("The Second Maximum Number is %d.\n", max2);
}