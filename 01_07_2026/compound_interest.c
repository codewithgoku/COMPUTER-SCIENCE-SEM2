// Compound Interest Calculator
#include<stdio.h>
#include<math.h>
int main(){
    int principal,time,interval,exp;
    float rate;
    double base,accumulated;
    printf("Enter the principal amount: ");
    scanf("%d",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%d",&time);
    printf("Enter the compounding interval: ");
    scanf("%d",&interval);
    
    // Calculate compound interest
    // Formula: A = P(1 + r/n)^(nt)
    // Where A is the accumulated amount, P is the principal, r is the rate, n is the interval, and t is the time
    rate= rate/100;
    base = 1 + rate /interval;
    exp=interval*time;
    accumulated = principal *pow((base),(exp));

    printf("The accumulated amount is: %.2lf", accumulated);
    return 0;
}