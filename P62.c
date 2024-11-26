#include <stdio.h>
#include <string.h>
int main () {
    char arr[100];
    fgets(arr, 100, stdin);
    int d=strlen(arr);
    printf("%d", d);
    for (int i=0; i<(d-1)/2; i++) {
        arr[i]=arr[d-i-2];
    }
    puts(arr);
}