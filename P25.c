#include <stdio.h>
int main () {
    int n;
    int mul=1;
    printf("This Program prints the Table for a Given Number!!\n");
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i=1; i<=10; i++) {
        mul = i*n;
        printf("%d\n", mul);
    }
    return 0;
}