#include <stdio.h>
int main () {
    int n;
    float sum=0;
    double mul=1;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        mul = mul*i;
        sum = sum +  (i/mul);
    }
    printf("%d", sum);
}