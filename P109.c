#include <stdio.h>
int main () {
    int d = 10;
    int *ptr;
    ptr = &d;
    *ptr = 20;
    printf("%d", d);
}