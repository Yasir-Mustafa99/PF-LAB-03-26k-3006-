#include <stdio.h>

int main(){
	int income, age, repayment;
	printf("Enter your monthly income: ");
	scanf("%d", &income);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your existing loan repayment: ");
	scanf("%d", &repayment);
	
	if(income <= 30000){
		printf("Rejected due to income");
	}
	else if(age<21 || age>60){
		printf("rejected due to age");
	}
	else if(repayment> income*0.4){
		printf("Rejected due to high debt ratio");
	}
	else{
		printf("Loan approved");
	}
	
	return 0;
}
