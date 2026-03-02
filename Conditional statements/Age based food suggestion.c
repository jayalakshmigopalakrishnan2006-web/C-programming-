#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    
    if (scanf("%d", &age) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 0;
    }

    if (age < 0) {
        printf("Invalid age! Age cannot be negative.\n");
    }
    else if (age <= 5) {
        printf("Suggested food: Mashed vegetables or soft fruits\n");
    }
    else if (age <= 12) {
        printf("Suggested food: Rice, eggs and milk\n");
    }
    else if (age <= 18) {
        printf("Suggested food: Burgers or pasta\n");
    }
    else if (age <= 50) {
        printf("Suggested food: Chapati, vegetables and chicken\n");
    }
    else {
        printf("Suggested food: Soup or grilled fish\n");
    }

    return 0;
}
