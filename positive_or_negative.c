#include<stdio.h>

void main(){

	float num;
	printf("enter a number :");
	scanf("%f",&num);
	if(num>0){
		printf("Number is positive");
	}
	else if (num==0){
		printf("Number is 0");
	} 
	else{
		printf("number is negative");
	}
}
