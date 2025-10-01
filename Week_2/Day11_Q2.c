//Program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float CP, SP, profit, loss;
    printf("Enter the Cost Price : ");
    scanf("%f", &CP);
    printf("Enter the Selling Price : ");
    scanf("%f", &SP);
    if (SP > CP) {
        profit = SP - CP;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", (profit / CP) * 100);
    } 
    else if (CP > SP) {
        loss = CP - SP;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", (loss / CP) * 100);
    } 
    else {
        printf("No profit, no loss.\n");
    }
}