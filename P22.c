#include <stdio.h>
int main () {
    int a;
    int f=1;
    printf("This is Factorial Calculator!! \n");
    printf("Enter the Number for Calculating Factorial: \n");
    scanf("%d", &a);
    for (int i=1;i<=a; i++)
    {
        f = f*i;
    }
    printf("%d", f);
    return 0;
}