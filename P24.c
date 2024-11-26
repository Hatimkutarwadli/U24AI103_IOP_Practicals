#include <stdio.h> 
#include <math.h>
int main () {
    int n;
    int x;
    printf("this program Will Print Y(x,n);");
    printf("Enter the Value of X: \n");
    scanf("%d", &x);
    printf("Enter the Value of N: \n");
    scanf("%d", &n);
    if (n==1) {
        printf("The Value of Y is: %d", 1+x);
    }
    else if (n==2) {
        printf("The Value of Y is: %d", 1+(x/n));
    }
    else if (n==3)
    {
        int pp = pow(x,n);
        printf("The value of Y is: %d", 1+pp);
    }
    else if (n>3 || n<1)
    {
        printf("The Value of Y is: %d", 1+n*x);
    }
    else {
        printf("Repeat Again");
    }
    return 0;
}