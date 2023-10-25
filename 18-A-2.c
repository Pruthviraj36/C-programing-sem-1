#include<stdio.h>
float mx(float, float);
float mi(float, float);
void main(){
	
	float a, b;
	printf("Enter the two numbers :\n");
	scanf("%f %f", &a, &b);
	float res = mx(a, b);
	printf("Maximum is : %f",res);
	float res1 = mi(a, b);
	printf("\nMinimum is : %f",res1);
	
}


float mx(float a, float b){
	
	if (a > b){	
		return a;	
	}
	else{	
		return b;	
	}
}


float mi(float a, float b){
	
	if (a < b){	
		return a;	
	}
	else{	
		return b;	
	}
}
