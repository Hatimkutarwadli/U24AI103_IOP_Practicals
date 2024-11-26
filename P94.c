#include <stdio.h>
#include <string.h>
int main () {
    char arr[] = "SVNITJAVA";
    char ans[10];
    char *ptr = arr;    
    for (int i=8; i>=0; i--) {
        ans[i] = (*ptr); 
        ptr++;
    }
    ans[9] = '\0';
    puts(ans);
}
/* The issue arises because you haven't null-terminated the ans array when its size is reduced to 9.
 Strings in C require a null character (\0) at the end to mark the end of the string. Without it, functions 
 like puts will keep reading memory until they find a null character, leading to undefined behavior or incorrect output. */
