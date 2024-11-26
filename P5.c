#include <stdio.h>
int main () {
    int a=10;
    int b=20;
    int c=30;
    printf("The Previous value of a was: %d \n", a);
    printf("The Previous value of b was: %d \n", b);
    a = c-a;
    b= c-b;
    printf("Now the Value of a is: %d\n", a);
    printf("Now the Value of b is: %d\n", b);
    return 0;
}