#include<stdio.h>
void main(){
		int n,i,a;
	printf("From	: ");
	scanf("%d",&n);
	printf("To	: ");
	scanf("%d",&a);
	while(n<=i<=a){
		i++;
		if(i%2==0){
			printf("\n%d even",i);
		}
		else{
			printf("\n%d odd",i);
		}
	}
}
