#include"stdio.h"

void main(){

	int a,b,c,i;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);
	i=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nLartgest number is : %d",i);	
}
