#include<stdio.h>
  
     void main(){
     	int n,i,a,rem;
     	
     	printf("Enter the number :");
     	scanf("%d",&n);
     	int frq[10]={0};
     	
//     	for(i=0;n!=0;i++){
//     	a = n%10;
//		 n = n/10;	
//     		
//		 }
//		 printf("the frequence is : %d",i);

	while(n>0)
	{
		rem=n%10;
		frq[rem]++;
		n=n/10;	
	}
	
	for(i=1;i<10;i++)
	{
		printf("digit %d is frq %d\n",i,frq[i]);
	}
	
	 }
	 
     
