#include <stdio.h>
int main () {
    int count1=0; //counter for including spaces.
    int count2=0; //counter for excluding spaces.
    char arr[100];
    char *ptr;
    printf("Enter the String: ");
    fgets(arr, 100, stdin);
    ptr = arr;
    // Removing the new line character.
    while ((*ptr) != '\0') {
        if ((*ptr) == '\n') {
            *ptr = '\0';
        }
        ptr++;
    }
    ptr = arr;
    while (*ptr != '\0') {
        if (*ptr != ' ') {
            count2++;
        }
        count1++;
    }
    printf("The Length of String with Spaces: %d\n", count1);
    printf("The Length of String without Spaces: %d", count2);
}