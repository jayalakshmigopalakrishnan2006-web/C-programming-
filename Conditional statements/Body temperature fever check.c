#include <stdio.h>

int main() {
    float temperature;

    printf("Enter body temperature in Celsius: ");

    if (scanf("%f", &temperature) != 1) {
        printf("Invalid input! Please enter a valid temperature.\n");
        return 0;
    }

    if (temperature >= 37.0) {
        printf("Result: You have a fever.\n");
    } else {
        printf("Result: You do not have a fever.\n");
    }

    return 0;
}
