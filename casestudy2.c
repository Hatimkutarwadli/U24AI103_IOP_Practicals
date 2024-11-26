#include <stdio.h>
int main () {
    int N;
    int M;
    int a;
    int b;
    int k;
    int avg;
    int sum=0;
    printf("Enter the Number of Empty Candy Jars: ");
    scanf("%d", &N);
    int jar[N];
    for (int i=0; i<N; i++) {
        jar[i] = 0;
    }
    printf("Enter the Number of Operations you want to perform: ");
    scanf("%d", &M);
    for (int i=1; i<=M; i++) {
        printf("Enter the Starting Indice: ");
        scanf("%d", &a);
        printf("Enter the Ending Index: ");
        scanf("%d", &b);
        printf("Enter the Number: ");
        scanf("%d", &k);
        for (int j = a-1; j<=b-1; j++) {
            jar[j] = jar[j] + k;
        }
    }
    for (int i=0; i<N; i++) {
        sum = sum + jar[i];
    }
    avg = sum/N;
    printf("The Answer is: %d", avg);
}