#include<stdio.h>

void main(){
	int n,i=1,a;
	printf("Enter table no : ");
	scanf("%d",&n);
	while(i<=10){
		a=n*i;
		printf("%d x %d = %d\n",n,i,a);
		i++;
	}
}
