#include <stdio.h>
#include <string.h>
int main () {
    char arr[1000];
    char c;
    int count=0;
    printf("Enter the Statement: ");
    fgets(arr, 1000, stdin);
    printf("Enter the Character you want to Search: ");
    scanf("%c", &c);
    int d = strlen(arr);
    for (int i=0; i<d; i++) {
        if (arr[i] == c) {
            count++;
        }
        else {
            continue;
        }
    }
    printf("The Number of Time the Character %c has Occured is: %d", c, count);
}