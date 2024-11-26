#include <stdio.h>
int main () {
    int a=5;
    int b=10;
    printf("The Previous value of a was: %d \n", a);
    printf("The Previous value of b was: %d \n", b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Now the Value of a is: %d\n", a);
    printf("Now the Value of b is: %d\n", b);
    return 0;
}