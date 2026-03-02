#include <stdio.h>

int main() {
    int choice;

    printf("Chocolate Menu:\n");
    printf("1. Milk Chocolate\n");
    printf("2. Dark Chocolate\n");
    printf("3. White Chocolate\n");

    printf("Enter your choice (1-3): ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    switch(choice) {
        case 1:
            printf("You selected Milk Chocolate.\n");
            printf("It has a creamy taste. Enjoy your chocolate!\n");
            break;
        case 2:
            printf("You selected Dark Chocolate.\n");
            printf("It has a rich flavour. Enjoy your chocolate!\n");
            break;
        case 3:
            printf("You selected White Chocolate.\n");
            printf("It has a sweet and smooth texture. Enjoy your chocolate!\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }

    return 0;
}
