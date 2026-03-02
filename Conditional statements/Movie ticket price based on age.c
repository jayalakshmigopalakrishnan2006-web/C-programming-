#include <stdio.h>

int main() {
    int age;
    int price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age!\n");
    }
    else if (age <= 12) {
        price = 100;
        printf("Category: Children\nTicket Price: %d\n", price);
    }
    else if (age <= 19) {
        price = 150;
        printf("Category: Teenager\nTicket Price: %d\n", price);
    }
    else if (age <= 60) {
        price = 200;
        printf("Category: Adult\nTicket Price: %d\n", price);
    }
    else {
        price = 120;
        printf("Category: Senior\nTicket Price: %d\n", price);
    }

    return 0;
}
