#include <stdio.h>
int main () {
    int a,b,c;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    printf("Enter the Third Number: ");
    scanf("%d", &c);
    if (a>b) {
        if (a>c) {
            printf("%d", a);
        }
        else 
        {
            printf("%d", c);
        }
    }
    else {
        if (b>c) {
            printf("%d", b);
        }
        else {
            printf("%d", c);
        }
    }
    return 0;    
}