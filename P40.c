#include <stdio.h>
int main () {
   int n;
   int sum=0;
   while (n>=0) {
    printf("Enter the Number: \n");
    scanf("%d", &n);
    if (n>=0) {
        sum = sum + n; 
    }
   }
   printf("%d \n", sum);
   printf("This Program is Ended.");
}