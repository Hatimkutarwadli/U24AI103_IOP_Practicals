#include <stdio.h>
int main () {
   float p;
   float r;
   float t;
   float i;
   printf("Welcome to the Simple Intrest Calculator!\n");
   printf("Enter the Principal Amount: \n");\
   scanf("%f", &p);
   printf("Enter the Rate of Intrest per Annum in Percentage: \n");
   scanf("%f", &r);
   printf("Enter the Time for Intrest Calculations: \n");
   scanf("%f", &t);
   i=(p*r*t)/100;
   printf("The Intrest Is: \n");
   printf("%f", i);
   return 0;
}