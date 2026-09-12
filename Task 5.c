#include <stdio.h>
int main(){
	int weight, people;
	printf("Enter number of people:");
	scanf("%d", &people);
	printf("Enter total combined weight:");
	scanf("%d", &weight);
	
	if(weight>1000 && people>10){
		printf("Entry denined: Exceeds both weight and poeple limit! \n");
	}
	else if(weight>1000){
		printf("Entry denied: Exceeds weight limit! \n");
	}
	else if(people>10){
		printf("Entry denied: Exceeds people limit! \n");
	}
	else{
		printf("Elevator can operate normal \n");
	}
	
	return 0;
}
