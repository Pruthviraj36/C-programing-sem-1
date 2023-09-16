#include<stdio.h>
void main(){
	
	int i=1,n,x=1;
	printf("To find factors of : ");
	scanf("%d",&n);
	while(i<=n){
	x=n%i;n	
	i++;
	if(x==0){
		printf("Factor is %d\n",x);
		}
	}
}
