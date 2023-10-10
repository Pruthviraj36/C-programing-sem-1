#include<stdio.h>
void main(){
    int n,fact=1,j;
	float e=1.0;   
	printf("Enter n :");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
    	fact*=j;
    	e += 1.0/fact;
	}
    printf("the value of \"e\" is = %f",e);
}
