#include <stdio.h>
#include <math.h>
int main () {
    float a;
    float b;
    float c;
    float s;
    float ar;
    float area;
    float exponent = 0.5;
    printf("Welcome to Calculator for Area of triangle!\n");
    printf("Enter The First side of Triangle: \n");
    scanf("%f", &a);
    printf("Enter the Second Side of Traignle: \n");
    scanf("%f", &b);
    printf("Enter the Third Side of Triangle: \n");
    scanf("%f", &c);
    s = (a+b+c)/2;
    ar = (s*(s-a)*(s-b)*(s-c));
    area = pow(ar,exponent);
    printf("The Area of Triangle is: \n");
    printf("%f", area);
    return 0;
}