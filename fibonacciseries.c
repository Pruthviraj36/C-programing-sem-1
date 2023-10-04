#include<stdio.h>
  
     void main(){
     	int n,a=0,b=1,c,i=1;
     	printf("Enter the number :");
     	scanf("%d",&n);
        printf("fibonacci series :");
		
		for(i=1;i<=n;i++){
			printf("%d",a);
			c = a+b;
			a=b;
			b=c;
			
		}
		printf("\n");	
     	
	 }
	 
	 
