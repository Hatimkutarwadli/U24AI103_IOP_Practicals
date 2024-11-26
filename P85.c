#include <stdio.h>
int vowel(char c);
int main () {
    char c;
    printf("Enter the Character: ");
    scanf("%c", &c);
    if (vowel(c) == 1) {
        printf("The Character is a Vowel.");
    }
    else {
        printf("The Character is a Consonent.");
    }
}
int vowel (char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    else {
        return 0;
    }
}