#include <stdio.h>

int main() {
    int age;
    float tuition, expenses;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter annual tuition fee: ");
    scanf("%f", &tuition);

    printf("Enter total annual expenses: ");
    scanf("%f", &expenses);

    if (age >= 18 && age <= 25) {
        if (tuition <= expenses)
            printf("Eligible and expenses cover tuition.\n");
        else
            printf("Eligible but tuition exceeds expenses.\n");
    } else {
        printf("Not eligible due to age.\n");
    }

    return 0;
}
