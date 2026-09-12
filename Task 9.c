#include <stdio.h>

int main() {
    float bill_amount = 0.0, final_bill = 0.0;
    float discount_percentage = 0.0;
    int hour = 0, is_member = 0;
    
    printf("Enter bill amount: ");
    scanf("%f", &bill_amount);
    printf("Enter hour of visit (0-23 in 24-hr format): ");
    scanf("%d", &hour);
    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &is_member);

    if (hour >= 15 && hour <= 17) {
        discount_percentage += 0.20;
    }
    if (is_member == 1) {
        discount_percentage += 0.10;
    }
    if (discount_percentage > 0.25) {
        discount_percentage = 0.25;
    }
    final_bill = bill_amount - (bill_amount * discount_percentage);

    printf("Restaurant Bill Summary");
    printf("Original Bill: Rs. %.2f\n", bill_amount);
    printf("Applied Discount: %.0f%%\n", discount_percentage * 100);
    printf("Final Payable Bill: Rs. %.2f\n", final_bill);

    return 0;
}
