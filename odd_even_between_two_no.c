#include<stdio.h>
void main(){
		int n,i;
	printf("From	: ");
	scanf("%d",&n);
	printf("To	: ");
	scanf("%d",&n);
	while(i<=n){
		i++;
		if(i%2==0){
			printf("\n%d even",i);
		}
		else{
			printf("\n%d odd",i);
		}
	}
}
