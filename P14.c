#include <stdio.h>
int main () {
    char character;
    printf("Enter the Character: ");
    scanf(" %c", &character);
    if (character>='a' && character<='z')
    {
        printf("The Entered Characters are Lower Case Letters");
    }
    else if (character>='A' && character<='Z')
    { 
        printf("The Entered Characters are Upper Case Letters");
    }
    else if (character>='0' && character<='9') {
        printf("The Entered Characters are Numbers");
    }
    else {
        printf("These Are Special Characters/Symbol");
    }
    return 0;
}