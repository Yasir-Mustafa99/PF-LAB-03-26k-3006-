#include <stdio.h>
int main(){
	int policy_status, vehicle_age;
	float claim_amount, approved_amount = 0;
	printf("Is Policy active? (1 = Yes, 0 = No):");
	scanf("%d", &policy_status);
	printf("Enter vehicle age: ");
	scanf("%d", &vehicle_age);
	printf("Enter claim amount: ");
	scanf("%f", &claim_amount);
	
	if(policy_status != 1){
		printf("Claim rejected: Policy not active!");
	}
	else if(claim_amount > 500000){
		printf("Claim rejected: amount exceeds 500000 limit!");
	}
	else if(vehicle_age > 15){
		printf("Claim rejected: Vehicle age exceeds 15 years limit!");
	}
	else if(vehicle_age <= 10 ){
		approved_amount = claim_amount;
        printf("Claim Status \n");
        printf("Status: Approved (100%%)\n");
        printf("Approved Amount: Rs. %.2f\n", approved_amount);
	}
	else {
        approved_amount = claim_amount * 0.5;
        printf("Claim Status \n");
        printf("Status: Approved (50%% partial payout)\n");
        printf("Approved Amount: Rs. %.2f\n", approved_amount);
    }
}
