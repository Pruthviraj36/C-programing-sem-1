#include<stdio.h>
float simpleInterest(float, float, float);
void main(){
	
	float p, r, t, i;
	printf("Enter the \"AMOUNT\"			: ");
	scanf("%f", &p);
	printf("Enter the \"RATE\"				: ");
	scanf("%f", &r);
	printf("Enter the \"TIME ( IN Years )\" : ");
	scanf("%f", &t);
	float res = simpleInterest(p, r, t);
	printf("Simple Interest is				: %f",res);
}

float simpleInterest(float p, float r, float t){
	
	float i = (p * r * t)/100;
	return i;
}
