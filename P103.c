#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
int main () {
    int x;
    int y;
    printf("Enter the First Number: ");
    scanf("%d", &x);
    printf("Enter the Second Number: ");
    scanf("%d", &y);
    int ans = max(x,y);
    printf("The Maximum Number is: %d", ans);
}