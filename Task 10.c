#include <stdio.h>
int main(){
	int heart_rate;
	float temp;
	
	printf("Enter your heart rate");
	scanf("%d", &heart_rate);
	printf("Enter your temperature");
	scanf("%f", &temp);
	
	if(heart_rate > 120 || temp > 39){
		printf("Critical - Immediate Attention");
	}
	else if((heart_rate <=120 && heart_rate>=100 ) && (temp >=37.5 && temp <= 39)){
		printf("urgent");
	}
	else{
		printf("Normal - Wait in Queue");
	}
	
	return 0;
}
