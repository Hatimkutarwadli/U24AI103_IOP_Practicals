#include <stdio.h>
int main () {
    float sales;
    float commission;
    printf("This Program is to Calculate Commission! \n");
    printf("Enter the Sales Amount: ");
    scanf("%f", &sales);
    if (sales<=500) {
        commission = (5/100)*sales;
    }
    else if (sales>=501 && sales<=2000) {
        commission = 35+(sales-500)*(10/100); 
    }
    else if (sales>=2001 && sales<=5000) {
        commission = 185+(sales-2000)*(12/100);
    } 
    else if (sales >=5001 ){
        commission=(sales)*(12.5/100);
    }
    else {
        printf("You are Not Eligible for Receiving Commission.\n");
    }
    printf("The Commission is: %f", commission);
}