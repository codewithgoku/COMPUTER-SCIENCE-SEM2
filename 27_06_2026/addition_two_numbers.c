#include <stdio.h>
int main() {
    int num1,num2,sum=0;
    printf("enter the two numbers\t"); // backslash t is used to give a tab space
    scanf("%d%d",&num1,&num2);
    printf("The result of two numbers is:\n%d",sum=num1+num2); // backslash n is used to give a new line
    return 0;
}