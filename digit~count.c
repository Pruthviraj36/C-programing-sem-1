#include<stdio.h>
void main(){
	
	long int n;
	int i=0,x
	scanf("%ld",&n);
	for(i=0;n != 0;i++){
		x=n%10;
		n=n/10;	
	}
	printf("%ld",i);
}
