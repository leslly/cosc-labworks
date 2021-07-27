#include<stdio.h>
int main()
{
	//determinr days of the week
	int day;
	printf("kindly input 1, 2, 3 for days of the week \n");
	scanf("%d", &day);
	switch (day){
		case 1:
			printf("1 is monday");
			break;
			case 2:
				printf("2 is tuesday");
				break;
				    case 3:
				    printf("3 is wednesday");
				    break;
	}
}
