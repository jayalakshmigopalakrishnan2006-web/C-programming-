#include <stdio.h>

int main() {
    float investment, buyPrice, currentPrice;
    float shares, profitLoss;

    printf("Enter initial investment amount: ");
    scanf("%f", &investment);

    printf("Enter stock purchase price: ");
    scanf("%f", &buyPrice);

    printf("Enter current stock price: ");
    scanf("%f", &currentPrice);

    shares = investment / buyPrice;
    profitLoss = (currentPrice - buyPrice) * shares;

    if (profitLoss > 0)
        printf("Profit = %.2f\n", profitLoss);
    else if (profitLoss < 0)
        printf("Loss = %.2f\n", -profitLoss);
    else
        printf("No Profit No Loss\n");

    return 0;
}
