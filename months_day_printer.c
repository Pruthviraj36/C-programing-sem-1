#include<stdio.h>

void main(){

	int i;
	printf("Enter Month no : ");
	scanf("%d",&i);
	switch(i){
	case 1: printf("\n\t31 Days");
	break;
	case 3: printf("\n\t31 Days");
	break;
	case 5: printf("\n\t31 Days");
	break;
	case 7: printf("\n\t31 Days");
	break;
	case 8: printf("\n\t31 Days");
	break;
	case 10: printf("\n\t31 Days");
	break;
	case 12: printf("\n\t31 Days");
	break;
	case 4: printf("\n\t30 Days");
	break;
	case 6: printf("\n\t30 Days");
	break;
	case 9: printf("\n\t30 Days");
	break; 
	case 11: printf("\n\t30 Days");
	break;
	case 2: printf("\n\t28 Days");
	break;
	default: printf("\n\t\*Enter valid input\*");
	}

}
