#include <stdio.h>
int main () {
    int n;
    printf("To Print Even Terms till N! \n");
    scanf("%d", &n);
    for (int i = 0; i<=n; i=i+2){
            printf("%d\t", i);
        }
}