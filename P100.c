//practice question
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("LMNIITSTUDENT.JAVA","w");
    char name[100];
    int roll,n;
    float totalmarks;
    printf("Enter the Number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter The Details of Student %d: \n", i+1);
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter Roll No: ");
    scanf("%d",&roll);
    printf("Enter Total Marks: ");
    scanf("%f",&totalmarks);
    fprintf(fptr, "The Details of Student %d are: \n", i+1);
    fprintf(fptr,"Name: %s\n",name);
    fprintf(fptr,"Roll Number: %d\n",roll);
    fprintf(fptr,"Total Marks: %f\n\n",totalmarks);
    }

    fclose(fptr);
    return 0;
}