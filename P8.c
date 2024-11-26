#include <stdio.h>
int main () {
    int seconds=31558150;
    float hour;
    float min;
    float day;
    hour=31558150/3600;
    min=31558150/60;
    day=hour/24;
    printf("The Total no Hours in a Year is: \n");
    printf("%f\n", hour);
    printf("The Total number minutes in a Year is: \n");
    printf("%f\n", min);
    printf("The Total Number of Days in a Year is: \n");
    printf("%f\n", day);
    return 0;
}