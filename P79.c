#include <stdio.h>
int interchange(int x, int y){
    x = x-y;
    y = y+x;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
}
int main () {
    int x=10;
    int y=5;
    printf("This Program is To Interchange the Number X to Y and Y to X.\n");
    printf("Initially X = %d and Y = %d\n", x, y);
    interchange(x,y);
}