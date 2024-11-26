#include <stdio.h>
int main() {
    char arr[100];
    printf("Input the Sentence: ");
    fgets(arr, 100, stdin);

    char *ptr = arr;
    int words = 0;

    // If no word is input
    if (arr[0] == '\n') {
        printf("The Number of Words are: %d\n", words);
        return 0;
    }

    // Remove the newline character from fgets
    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
        }
        ptr++;
    }

    // Reset the pointer to the beginning of the array
    ptr = arr;

    // Count words based on spaces
    while (*ptr != '\0') {
        if (*ptr == ' ') {
            words++;
        }
        ptr++;
    }

    printf("The Number of Words are: %d\n", words + 1);
    return 0;
}
