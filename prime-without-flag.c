#include<stdio.h>
void main(){
	int flag=0,n,i;
	printf("Enter number :");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;	
		}
	}
	if(flag==1){
		printf("Non Prime");
	}
	else{
		printf("Prime");
	}
}
