//for (initialisation expression;loop repitition condition; update expression){
//statement;
//}
#include<stdio.h>
int main(){
	//program fragment with a loop
	 int count_emp=0, hours;
	double rate,pay;
	int accumulator=5;
	while( count_emp<7){
		printf("input employee hours:\n");
		scanf("%d",&hours);
		printf("input employee rate:\n");
		scanf("%If",&rate);
		pay=hours*rate;
		printf("pay is $%6.2f\n\n",pay);
		accumulator=accumulator+5;
		count_emp += 1; 
		//count_emp increment
	}
	printf("\nAll employees processed\n");
	printf("Accumulator is %d",accumulator);
	printf("end of loop");
}
