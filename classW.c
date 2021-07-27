#include <stdio.h> // PREPROCESSOR DIRECTIVE FOR PRINTING

int main(void){//main function int int_number=19;
int rest_heart_rate;
int age;
//boolean registered = true;
printf("enter rest heart rate and age:\n");
scanf("%d%d",&rest_heart_rate,&age);

//boolean status = rest_heart_rate > 75 || age > 50;

//printf("status is %b",status);
if (!(rest_heart_rate > 75)) { // not operator opposite of what you have in if contion;
printf("rest_heart_rate is not greater than 75");
}

if(rest_heart_rate > 75){
	printf("\nsee your doctor immediately");
}else{
	printf("\nyou are doing well");
}
//int n = 200;

//if (!(n<100)){
// printf("n is less than 100");
//}else{
// printf("n is greater than 100");
//}
//int div = 100
}
//int div = 100
