// The following complete program determines if a user is eligible to donate blood. It first validates the user's age (must be 18 or older), and then evaluates their weight (
#include <stdio.h>

int main() {
    int age,weight;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your Weight:");
    scanf("%d",&weight);
    if(age>=18){
        if(weight>=50){
            printf("you are eligble to donate blood:");

        }
        else{
            printf("your %d age but your weight is%d, so you are not eligible to donate blood:",age,weight);
        }
    }
    else{
        printf("Your age is %d, so your are not eligible to donate blood:",age);
    }

    return 0;
}