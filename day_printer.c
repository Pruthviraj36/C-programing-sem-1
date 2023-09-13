#include<stdio.h>

int main(){
		int x;
	printf("Enter day : ");
	scanf("%d",&x);
	switch(x){
	case 0: printf("\n\tSunday");
	break;
	case 1: printf("\n\tMonday");
	break;
	case 2: printf("\n\tTuesday");
	break;
	case 3: printf("\n\tWednesday");
	break;
	case 4: printf("\n\tThursday");
	break;
	case 5: printf("\n\tFriday");
	break;
	case 6: printf("\n\tSaturday");
	break;
	default : printf("\n\t\*Enter valid input\* ");
	break;
	}
}
