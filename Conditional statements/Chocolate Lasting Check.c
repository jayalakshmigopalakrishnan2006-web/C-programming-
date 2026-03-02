#include <stdio.h>

int main() {
    int total, perDay, days;
    int required;

    printf("Enter total chocolates: ");
    scanf("%d", &total);

    printf("Enter chocolates consumed per day: ");
    scanf("%d", &perDay);

    printf("Enter planned days: ");
    scanf("%d", &days);

    required = perDay * days;

    if (total >= required) {
        printf("1\n");   // Chocolates will last
    } else {
        printf("0\n");   // Chocolates will run out
    }

    return 0;
}
