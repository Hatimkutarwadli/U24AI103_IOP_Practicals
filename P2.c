#include <stdio.h>
int main () {
    float m;
    float s;
    float e;
    float i;
    float ss;
    float t;
    float p;
    printf("Welcome to the Marks Calculator: \n");
    printf("Enter the Marks of Math: \n");
    scanf("%f", &m);
    printf("Enter the Marks of Science: \n");
    scanf("%f", &s);
    printf("Enter the Marks of English: \n");
    scanf("%f", &e);
    printf("Enter the Marks of IT: \n");
    scanf("%f", &i);
    printf("Enter the Marks of SS: \n");
    scanf("%f", &ss);
    printf("The Total of the Marks is: \n");
    t=m+s+e+ss+i;
    printf("%f", t);
    printf("The Overall percentage is: \n");
    p=(t*100)/500;
    printf("%f", p);
    return 0;
}