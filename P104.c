#include <stdio.h>

// Define an enumeration for colors with hexadecimal values
enum Colors {
    RED = 0xFF0000,
    GREEN = 0x00FF00,
    BLUE = 0x0000FF,
    YELLOW = 0xFFFF00,
    BLACK = 0x000000
};

int main() {
    // Example input: Choose a color
    enum Colors color;
    printf("Enter the Color Name: ");
    scanf("%s", color);

    // Switch statement to display hexadecimal color codes
    switch (color) {
        case RED:
            printf("Hexadecimal code for RED is %#06X\n", RED);
            break;
        case GREEN:
            printf("Hexadecimal code for GREEN is %#06X\n", GREEN);
            break;
        case BLUE:
            printf("Hexadecimal code for BLUE is %#06X\n", BLUE);
            break;
        case YELLOW:
            printf("Hexadecimal code for YELLOW is %#06X\n", YELLOW);
            break;
        case BLACK:
            printf("Hexadecimal code for BLACK is %#06X\n", BLACK);
            break;
        default:
            printf("Unknown color\n");
            break;
    }

    return 0;
}