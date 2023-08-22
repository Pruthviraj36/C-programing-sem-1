#include<stdio.h>

void main(){
	
	float a,b,c;
	printf("a:");
	scanf("%f",&a);
	printf("b:");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%f\n",a);
	printf("b=%f",b);
}
