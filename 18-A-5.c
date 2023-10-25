#include<stdio.h>
float swap(float, float, float);
void main(){
	
	float a, b, c;
	printf("Enter Number : ");
	scanf("%f", &a);
	printf("Enter Number : ");
	scanf("%f", &b);
}

float swap(float a, float b, float c){
	
	c=a;
	a=b;
	b=c;
	printf("a=%f\n",a);
	printf("b=%f",b);
 }
