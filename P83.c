#include <stdio.h>
int max(int arr[]);
int main () {
    int arr[10];
    for (int i=0; i<10; i++) {
        printf("Enter the Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The Maximum Number in the Array is: %d", max(arr));
}
int max(int arr[]) {
    int max=0;
    for (int i=0; i<10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}