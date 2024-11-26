    #include <stdio.h>
    int main () {
        FILE *fptr;
        fptr = fopen("P102.txt", "r");
        char ch;
        int line=1;
        int character=0;
        int words=1;
        ch = fgetc(fptr); 
        if (ch == ' ') {
            printf("The File is Empty.");
        }
        else {
            while (ch != EOF) {
                if (ch != ' ' && ch != '\n') {
                    character++;
                }
                else if (ch == ' ' || ch == '\n') {
                    if (ch == '\n') {
                    line++;
                    }
                    words++;
                }
                ch = fgetc(fptr);
            }
            printf("The Number of Lines in Text File = %d\n", line);
            printf("The Number of Words in Text File = %d\n", words);
            printf("The Number of Characters in Text File = %d", character);
        }
    }