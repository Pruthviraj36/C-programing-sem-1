#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter numbers in series : ");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
		if(a[i]%3 == 0){
			count++;
		}
	}
	printf("Total negative numbers are : %d",count);
}
