#include <stdio.h>
int main () {
    float m;
    float p;
    float c;
    float e;
    float cm;
    printf("This is the Program to Calculate Cutoff Marks: \n");
    printf("Enter the Marks of Math out of 200: \n");
    scanf("%f", &m);
    printf("Enter the Marks of Physics out of 200: \n");
    scanf("%f", &p);
    printf("Enter the Marks of Chemistry out of 200: \n");
    scanf("%f", &c);
    printf("Enter the Marks of Entrance Examination out of 100: \n");
    scanf("%f", &e);
    cm = (m/2)+(p/2)+(c/2)+e;
    printf("The Cut off Marks are: %f", cm);
    return 0;
}