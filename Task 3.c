#include <stdio.h>

int main() {
    int account_type;
    float balance, interest_rate = 0, annual_interest = 0;

    printf("Select Account Type (1 = Savings, 2 = Current, 3 = Fixed Deposit): ");
    scanf("%d", &account_type);

    printf("Enter account balance: ");
    scanf("%f", &balance);

    switch (account_type) {
        case 1:
            if (balance > 100000) {
                interest_rate = 0.04;
            } else {
                interest_rate = 0.02;
            }
            break;

        case 2:
            interest_rate = 0.0;
            break;

        case 3:
            interest_rate = 0.08;
            break;

        default:
            printf("Invalid account type selected!\n");
            return 1;
    }
    annual_interest = balance * interest_rate;

    printf("Result \n");
    printf("Annual Interest Earned: Rs. %.2f\n", annual_interest);

    return 0;
}
