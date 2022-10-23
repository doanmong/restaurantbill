#include <stdio.h>
int main(){
    float meal,tax,tip,total; // declare 4 variables
    printf("Enter meal cost: ");
    scanf("%f", &meal); // take inputs
    printf("Enter tax percent: ");
    scanf("%f",&tax);
    printf("Enter tip percent: ");
    scanf("%f", &tip);
    printf("\n******Bill******\n");
    printf("Cost: $%.2f\n",meal); // print cost
    printf("Tax: $%.2f\n",(tax/100)*meal); // print tax amount round off to 2 digits using .2f
    printf("Tip: $%.2f\n", (tip/100)*meal); // print tip amount
    total = meal + (tax/100)*meal + (tip/100)*meal; // calculate total
    printf("Total: %.2f", total);//print total
    return 0;
}