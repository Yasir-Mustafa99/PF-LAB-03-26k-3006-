#include <stdio.h>

int main() {
    int plan, minutes;
    float bill = 0.0;

    printf("Select Telecom Plan:\n");
    printf("1. Plan 1 (Rs. 500 for 1000 mins)\n");
    printf("2. Plan 2 (Rs. 800 for 2000 mins)\n");
    printf("3. Plan 3 (Rs. 1200 for Unlimited mins)\n");
    printf("4. Plan 4 (Custom: Rs. 1/min)\n");
    printf("Enter plan choice (1-4): ");
    scanf("%d", &plan);

    printf("Enter total minutes used: ");
    scanf("%d", &minutes);

    switch (plan) {
        case 1:
            if (minutes > 1000) {
                bill = 500.0 + ((minutes - 1000) * 2.0);
            } else {
                bill = 500.0;
            }
            break;

        case 2:
            if (minutes > 2000) {
                bill = 800.0 + ((minutes - 2000) * 2.0);
            } else {
                bill = 800.0;
            }
            break;

        case 3:
            bill = 1200.0;
            break;

        case 4:
            bill = minutes * 1.0;
            break;

        default:
            printf("Invalid plan selected!\n");
            break;
    }

    printf("Telecom Bill \n");
    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}
