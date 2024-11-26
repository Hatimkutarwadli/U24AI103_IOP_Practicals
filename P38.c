#include <stdio.h>
#include <math.h>
int main () {
    int n;
    int pp;
    printf("This is The Program to Print Sq. of Numbers till N!! \n");
    printf("Enter the Number: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        pp = i*i;
        printf("%d\t", pp);
    }
}