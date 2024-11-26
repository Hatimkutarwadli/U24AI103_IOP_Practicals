#include <stdio.h>
int main () {
    int hr;
    int sec;
    int min;
    int in;
    printf("This Program is to Convert Time: \n");
    printf("Enter the Total Time in Seconds: \n");
    scanf("%d", &in);
    hr = in / 3600;
    in = in % 3600;
    min = in / 60;
    sec = in % 60;
    printf("The Time is: \n");
    printf("%d:%d:%d", hr,min,sec);
    return 0;
}   