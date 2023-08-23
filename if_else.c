#include<stdio.h>

void main(){
	
	float per;
	printf("\t\t\t\t\t\t\t  Results\n\n\n");
	printf("\t\tEnter Percentage : ");
	scanf("%f",&per);
	printf("\n\n\n\n\t\tYou are	         : ");
	if(per>=33){
		printf("\t\t\tPassed");
	}
	
	else{
		printf("\t\t\t\tbetter luck next time");
	}
}
