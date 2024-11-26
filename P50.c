#include <stdio.h>
int main () {
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d", &n);
    char c = 'A';
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            printf("%c", c+(i-1));
        }
        printf("\n");
    }
}