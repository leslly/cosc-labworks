#include<stdio.h>
int main(){
	
	int age;
	char gender;
	
	printf("how old are you? \n");
	scanf("%d",&age);
	
	printf("input gender m/f\n");
	scanf("%s",&gender);
	
if(age >= 18){
	printf("nice");
	
	if(gender == 'm'){
		printf("cool");
	}
	
	if(gender == 'f'){
		printf("best");
	}
}else{
	printf("magazine");
}
return 0;
}
