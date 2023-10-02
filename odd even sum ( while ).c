#include<stdio.h>
void main(){

	int n,i=1,evencount=0,oddcount=0;
	while(i<=10){
		scanf("%d",&n);
		if(n%2==0){
			evencount=evencount+n;
		}
		else{
			oddcount=oddcount+n;
		}
			i++;
	}
	printf("Evensum is	:%d\n",evencount);
	printf("oddsum is	:%d",oddcount);
}
