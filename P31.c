#include <stdio.h>
int main () {
    int n;
    int s;
    int d;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    while (n > 0) {
        d = n%10;
        s = s+d;
        n = n/10;
    }
    printf("%d", s);
    return 0;
}