#include <stdio.h>
int main () {
    int base;
    int exp;
    int ans=1;
    printf("This Program will Calculate the Power Vaale Answers! \n");
    printf("Please Enter the Base: \n");
    scanf("%d", &base);
    printf("Enter the Exponent or Power: \n");
    scanf("%d", &exp);
    for (int i=1; i<=exp; i++) {
       ans = ans*base;
    }
    printf("The Answer will be: %d", ans);
    return 0;
}