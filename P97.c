#include <stdio.h>
int main() {
    char arr[100];
    printf("Enter the Array: ");
    fgets(arr, 100, stdin);
    char *ptr = arr;
    int count=0;
    //Remove the new line character
    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
        }
        ptr++;
    }
    ptr = arr;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
    }
    printf("The Number of Vowels are = %d", count);
}