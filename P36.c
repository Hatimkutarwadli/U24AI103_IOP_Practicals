#include <stdio.h>
int main () {
    int n;
    printf("To Print Odd Terms till N! \n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        if (i%2!=0) {
            printf("%d\t", i);
        }
    }
}