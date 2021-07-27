#include<stdio.h>
#include<stdlib.h>

int main(){
	//do while .in this program the average of each student is calculated by the score input
	float grade =0;
	float scoreEntered =0;
	float numberOfTest =0;
	float average =0;
	
	printf("press 0 when complete\n");
	
	do{
		printf("test: %.0f  Average: %.2f\n",numberOfTest ,average);
		printf("\nenter test score:");
		scanf("%f",&scoreEntered);
		grade+=scoreEntered;
		numberOfTest++;
		average = grade/numberOfTest;
	}while(scoreEntered !=0);
	
	
}
