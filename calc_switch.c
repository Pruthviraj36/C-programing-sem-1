#include<stdio.h>

void main(){
	
	char op;
	double x,y;
	printf("Enter Operator :");
	scanf("%c",&op);
	printf("Enter first number	:");
	scanf("%lf",&x);
	printf("Enter second number	:");
	scanf("%lf",&y);
	switch(op){
	case '+' :
		printf("\n%lf + %lf = %lf:",x,y,x+y);
		break;
	case '-' :
		printf("\n%lf - %lf = %lf:",x,y,x-y);
		break;
	case '*' :
		printf("\n%lf * %lf = %lf:",x,y,x*y);
		break;
	case '/' :
		printf("\n%lf / %lf = %lf:",x,y,x/y);
		break;
	default:printf("Error! operator is not correct");	
		}
}
