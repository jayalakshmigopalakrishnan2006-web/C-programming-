#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive decimal integer: ");

    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }

    printf("Hexadecimal equivalent: %X\n", number);
    printf("Octal equivalent: %o\n", number);

    return 0;
}
