#include <stdio.h>
int main () {
    int min = 0;
    int c;
    int arr[] = {2,5,1,3,4};
    int sortedarr[5];
    for (int i=0; i<4 ; i++) {
        min = arr[i];
        for (int j=0; j<5; j++) {
            if (arr[j] < min) {
                sortedarr[i] = arr[j];
            }
        }
    }
}