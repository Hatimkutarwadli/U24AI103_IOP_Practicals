#include <stdio.h>
int main () {
    int arr[5] = {21,321,66,32,00};
    int temp;
    int n=5;
    int indexofmix;
    for(int i=0; i<n-1; i++) {
        indexofmix = i;
        for (int j=i+1; j<n; j++) {
            if (arr[i] > arr[j]) {
                indexofmix = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexofmix];
        arr[indexofmix] = temp;
    }
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
}
