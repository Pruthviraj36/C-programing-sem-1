#include<stdio.h>
void main(){
	int i=1,x,a=0,n;
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			a=a+i;
		}
		i++;
	}
	if(a==n){
		printf("perfect");
	}
	else{
		printf("Not Perfect");
	}
}
