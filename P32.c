#include <stdio.h>
int main () {
    int n;
    int num;
    int m1=0, m2=0;
    printf("Enter How Many Number are you going to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the %d Number: ", i + 1);    
        scanf("%d", &num);

        if(num > m1) {
            m2 = m1;
            m1 = num;
        }
            else if (num > m2 && num != m1) {
                m2 = num;
            }
    }
    printf("The First Maximum Number is: %d\n", m1);
    printf("The Second Maximum Number is: %d", m2);
    return 0;
}