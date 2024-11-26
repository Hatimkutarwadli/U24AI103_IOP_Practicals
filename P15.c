#include <stdio.h>
int main () {
    float m;
    float s;
    float ss;
    float eng;
    float it;
    float total;
    printf("This is the Program to Give you Result: \n");
    printf("Enter the Marks of Math: \n");
    scanf("%f", &m);
    printf("Enter the Marks of Science: \n");
    scanf("%f", &s);
    printf("Enter the Marks of Social Science: \n");
    scanf("%f", &ss);
    printf("Enter the Marks of English: \n");
    scanf("%f", &eng);
    printf("Enter the Marks of IT: \n");
    scanf("%f", &it);
    total=((m+s+ss+eng+it)*100)/500;
    if (total >= 95) {
        printf("Your Grade is A+");
    }
    else if (total <= 95 && total >= 85) {
        printf("Your Grade is A");
    }
    else if (total <= 85 && total >= 70) {
        printf("Your Grade is B+");
    }
    else if (total <=70 && total >= 50) {
        printf("Your Grade is B");
    }
    else if (total >= 50 && total >= 33) {
        printf("Your Grade is C");
    }
    else if (total <= 33 && total >= 10) {
        printf("You Failed!! ");
    }
    else {
        printf("Chullu bhar paani me dobb maro");
    }
    return 0;
}