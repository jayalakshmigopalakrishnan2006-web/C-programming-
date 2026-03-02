#include <stdio.h>

int main() {
    float rate1, rate2, rate3;

    printf("Enter success rate of Agent 1: ");
    scanf("%f", &rate1);
    printf("Enter success rate of Agent 2: ");
    scanf("%f", &rate2);
    printf("Enter success rate of Agent 3: ");
    scanf("%f", &rate3);

    if (rate1 >= rate2 && rate1 >= rate3)
        printf("Agent 1 has Highest Priority\n");
    else if (rate2 >= rate1 && rate2 >= rate3)
        printf("Agent 2 has Highest Priority\n");
    else
        printf("Agent 3 has Highest Priority\n");

    return 0;
}
