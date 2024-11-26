#include <stdio.h>
int main () {
    int n;
    int sumodd=0;
    int sumeven=0;
    printf("This is the program to print Sum of Even and Odd Numbers till N! \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%2==0)
        {
            sumeven= sumeven + i;
        }
        else {
            sumodd = sumodd +i;
        }
    }
    printf("The Sum of Even Terms are: %d\n", sumeven);
    printf("The Sum of Odd Terms are: %d\n", sumodd);
    return 0;
}