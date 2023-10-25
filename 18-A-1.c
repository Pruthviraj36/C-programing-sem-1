#include<stdio.h>
float add(float, float);
void main(){
	float a, b, sum;
	printf("Enter the two numbers : ");
	scanf("%f %f", &a, &b);
	add(a, b);
}
float add(float a, float b){
	float sum = a + b;
	printf("Sum is : %f",sum);
}
