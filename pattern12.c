#include<stdio.h>
  
     void main(){
     	int i,j,n=5;
     	
     	for(i=1;i<=n;i++){
     		
     		for(j=1;j<=i;j++){
     			
     			printf(" ");
			 }
			 
			for(j=1;j<=6-i;j++) {
				
				printf("* ");
				
			}
			 
			 printf("\n");
		 }
		 
	 }
