#include <stdio.h>
#include <string.h>
int main () {
    char arr[1000];
    char c;
    printf("Enter the Statement: ");
    fgets(arr, 1000, stdin);
    printf("Enter the Character you want to Search: ");
    scanf("%c", &c);
    int d = strlen(arr);
    for (int i=0; i<d; i++) {
        if (arr[i] == c) {
            printf("The Position of the Entered Character is %d.", i+1);
            break;
        }
        else {
            continue;
        }
    }
}