#include <stdio.h>
int main () {
    float f;
    float c;
    printf("Welcome to Farenheit to Celcius Convertor: \n");
    printf("Enter the Temprature in Fereheit: \n");
    scanf("%f", &f);
    c=((f-32)*5)/9;
    printf("The Temprature in Celcius is: \n");
    printf("%f", c);
    return 0;
}