#include<stdio.h>
  
     void main(){
     	int n,a,sum=0,rem;
     	  
     	    printf("Enter the number :");
     	    scanf("%d",&n);
     	    a = n;
     	    
     	    while(n!=0){
     	    	rem = n%10;
     	    	sum = sum*10 + rem;
     	    	n = n/10;
     	    	
			 }
			 printf("the reverce number is :%d",sum);
	 }
