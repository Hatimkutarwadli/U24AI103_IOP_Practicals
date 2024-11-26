#include <stdio.h>
int main () {
    int unit;
    float amount;
    printf("This program is to Bill your Electricity Consumption!! \n");
    printf("Please Enter the Consumption of Units: \n");
    scanf("%d", &unit);
    if (unit>=0 && unit<=200) {
        amount = unit*0.5;
    }
    else if(unit>=201 && unit<=400) {
        amount = 100+((unit-200)*0.65);
    }
    else if (unit >=401 && unit<=600) {
        amount = 230+((unit-400)*0.8);
    }
    else if (unit >=601) {
        amount = 425+((unit-600)*1.25);
    }
    else {
        printf("This Unit Consumption is Invalid.");
    }
    printf("The Total Bill Amount is: %f", amount);
}