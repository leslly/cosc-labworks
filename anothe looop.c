//do{
//statement to execute
//}while(condition);

#include<stdio.h>
int main(){
int age;
int height;

printf("enter first student age\n");
scanf("%d",&age);
printf("enter first student height");
scanf("%d",&height);

int flag;

do{
	flag = age > 20 && height < 50;
	
	printf("\nvalue of flag is %d",flag);
	printf("welcome to 100l\n");
	printf("\nyour age is %d",age);
	printf("\nyour height is %d",height);
	printf("\n\nenter next student age\n");
	scanf("%d",&age);
	printf("enter next student height\n");
	scanf("%d",&height);
	
	flag = age > 20 && height < 50;
}while(flag);


printf("\nvalue of flag outside loop is %d",flag);	
}



