#include <stdio.h>

int main(){
	float entry_test, fsc_marks, combined_score;
	printf("Enter the Entry test score");
	scanf("%f", &entry_test);
	printf("Enter you fsc marks");
	scanf("%f", &fsc_marks);
	combined_score = (entry_test*0.5) + (fsc_marks*0.5);
	printf("Combined Weightage score: %.2f \n", combined_score);
	
	if(combined_score>= 80){
		printf("Congrats, You are selected for the Computer Science");
	}
	else if(combined_score>=65){
		printf("congrats, you are selected for the Software Engineering");
	}
		
	else if(combined_score>=50){
		printf("congrats, you are selected for the Information Technology");
	}
	else{
		printf("Rejected");	
		}
		
		return 0;
}
