#include <stdio.h>
int main () {
    int num;
    int *ptr;
    ptr = num;
    int n;
    int max=-1000;
    printf("Enter the Number you want to input: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        printf("Enter the Number %d: ", i);
        scanf("%d", ptr);
        if (*ptr >= max) {
            max = *ptr;
        }
    }
    printf("The Biggest Number from the List is: %d", max);
}