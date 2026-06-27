#include <stdio.h>

int main() {
    int num1,num2,sum=0,sub=0,op;
    printf("enter the two numbers\t"); // backslash t is used to give a tab space
    scanf("%d%d",&num1,&num2);
    printf("enter the operator\t Enter 1 for addition and 2 for subtraction\n");
    scanf("%d",&op);
    switch(op) {
        case 1:
            sum=num1+num2;
            printf("The result is: %d",sum);
            break; //force the switch statement to exit after executing the case
        case 2:
            sub=num1-num2;
            printf("The result is: %d",sub);
            break;
    }
    return 0;
}