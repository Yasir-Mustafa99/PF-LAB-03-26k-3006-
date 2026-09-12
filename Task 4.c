#include <stdio.h>
int main(){
	int membership_type, time_slot;
	float base_rate = 0, final_fee = 0;
	printf("Select Membership Type: \n");
	printf("1. Student(Rs.2000) \n");
	printf("2. Regular(Rs.3500) \n");
	printf("3. Senior Citizen(Rs. 2500) \n");
	printf("Enter choice(1-3):");
	scanf("%d", &membership_type);
	
	printf("Enter time slot \n");
	printf("1. Morning (15%% discount) \n");
	printf("2. Evening (No discount) \n");
	printf("Enter choice (1-2): \n");
	scanf("%d", &time_slot);

switch (membership_type){
	case 1:
		base_rate = 2000;
		break;	
	case 2:
		base_rate = 3500;
		break;	
	case 3:
		base_rate = 2500;
		break;
	default:
        printf("Invalid membership type selected! \n");
       break;
}
switch (time_slot){
	case 1: 
		final_fee = base_rate * 0.85;
		break;
	case 2:
		final_fee = base_rate;
		break;
	default:
		printf("Invalid Time slot selected! \n");
}
	printf("Receipt \n");
	printf("Base Monthly fee: Rs. %.2f \n", base_rate);
	printf("Final Monthly fee: Rs. %.2f \n", final_fee);
	
	return 0;
}
