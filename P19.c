#include <stdio.h>
int main () {
    char ch;
    printf("Enter the Character: \n");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z')?printf("The Entered Letter is Lower"):printf("The Entered Letter is Upper");
    return 0;
}