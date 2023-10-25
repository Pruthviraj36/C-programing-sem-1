#include<stdio.h>
float max(float, float, float);
void main(){
	
	float a, b, c, i;
	printf("Enter Number : ");
	scanf("%f", &a);
	printf("Enter Number : ");
	scanf("%f", &b);
	printf("Enter Number : ");
	scanf("%f", &c);
	float res = max(a, b, c);
	printf("Maximum is : %f",res);
}

float max(float a, float b, float c){
	
	if (a > b && a > c){
		return a;
	}
	else if (b > a && b > c){
		return b;
	}
	else{
		return c;
	}
 }
