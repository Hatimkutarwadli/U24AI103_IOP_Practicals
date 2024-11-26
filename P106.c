#include <stdio.h>
#include <string.h>
int readitem (struct item i1) {
    char item1[100];
    printf("Enter the Name of Item 1: ");
    fgets(item1,100,stdin);
    strcpy(i1.itemname, item1);
    printf("Enter the Quantity of Item 1: ");
    scanf("%d", &i1.quantity);
    printf("Enter the price of Item 1: ");
    scanf("%d", &i1.price);
    i1.amount = i1.quantity*i1.price;
    return i1.amount;
}
struct item {
    char item_name[100];
    int quantity;
    int price;
    int amount;
};
int main () {
    struct item i1;
    int a = readitem(i1);
    printf("The Amount of item 1 is: %d", a);

}