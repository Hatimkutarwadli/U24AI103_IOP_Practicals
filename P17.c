#include <stdio.h>
int main () {
    int a;
    int b;
    int c;
    printf("Enter First Number: \n");
    scanf("%d", &a);
    printf("Enter Second Number: \n");
    scanf("%d", &b);
    printf("Enter Third Number: \n");
    scanf("%d", &c);
    if (a>=b && a>=c)
    {
        printf("The First Number is Greatest: %d", a);
    }
    else if (b>=a && b>=c)
    {
        printf("The Second Number is Greatest: %d", b);
    }
    else {
        printf("The Third Number is Greatest: %d", c);
    }
    return 0;
}