#include <stdio.h>
int main () {
    int n;
    int digit=0;
    printf("This Program is to print Factors of a Given Number!!\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        digit = n%i;
        if (digit==0) {
            printf("%d\n", i);
        }
    }
}