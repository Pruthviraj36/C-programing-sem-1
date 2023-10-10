#include<stdio.h>
void main(){
	int i,j,n,a;
	scanf("%d",&n);
	if(n==65){
		for(i=65;i<=90;i++){
			printf("%c = %d\n",i,i);
		}
	}
	scanf("%d",&a);
	 if(a==97){
		for(j=97;j<=122;j++){
			printf("%c = %d\n",j,j);
		}
	}
}
