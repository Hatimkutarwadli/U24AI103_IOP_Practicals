#include <stdio.h> 
struct books {
    char title[100];
    char author[100];
    char publisher[100];
    int page;
    float price;
};
void *readBook(struct books *ptr1){
    printf("Enter Title of Book:\n");
    fgets(ptr1->title,100,stdin);
    printf("Enter Author of Book:\n");
    fgets(ptr1->author,100,stdin);
    printf("Enter Publisher of Book:\n");
    fgets(ptr1->publisher,100,stdin);
    printf("Enter Number of Pages of Book:\n");
    scanf("%d",&ptr1->page);
    printf("Enter Price of Book:\n");
    scanf("%f",&ptr1->price);
}
int main () {
    struct books b1;
    struct books *ptr1 = &b1;
    readBook(ptr1);
    // Displaying Information.
    printf("\nBook Details\n");
    printf("Title: %s", (ptr1)->title);
    printf("Author: %s",(ptr1)->author);
    printf("Publisher: %s",(ptr1)->publisher);
    printf("Pages: %d\n", (ptr1)->page);
    printf("Price: %f\n", (ptr1)->price);
}