#include <stdio.h>
int main () {
    int hr;
    int min;
    int sec;
    int a;
    printf("Welcome to The Time Convertor: \n");
    printf("Enter the Hour of Time: \n");
    scanf("%d", &hr);
    printf("Enter the Minute of Time: \n");
    scanf("%d", &min);
    printf("Enter the Sec of Time: \n");
    scanf("%d", &sec);
    a = (hr*3600)+(min*60)+sec;
    printf("The Seconds Are: \n");
    printf("%d", a);
    return 0;
}