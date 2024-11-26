#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen("P99.txt", "r");
    char ch;
    int count = 0;
    ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch=='U') {
            count++;
        }
    }
    printf("\n");
    printf("The Number of Vowels in Text file is: %d", count);
    fclose(fptr);
}