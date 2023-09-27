
   #include<stdio.h>
  
    void main()   {
    	
    	int n,a,b,c,d;
    	printf("Enter the number :");
    	scanf("%d",&n);
    	
    	while(n>0){
    		a=n%10;
    		n=n/10;
    		c=c*10+a;
		}
		while(c>0){
			d = c%10;
			 
			 if(d==0){
			 	printf("  zero");
			 } 
			else if(d==1){
			 	printf("  one");
			 }
			 else if(d==2){
			 	printf("  two");
			 }
			 else if(d==3){
			 	printf("  three");
			 }
			 else if(d==4){
			 	printf("  four");
			 }
			 else if(d==5){
			 	printf("  five");
			 }
			 else if(d==6){
			 	printf("  six");
			 }
			 else if(d==7){
			 	printf("  seven");
			 }
			 else if(d==8){
			 	printf("  eight");
			 }
			 else if(d==9){
			 	printf("  nine");
			 } c=c/10;
		}
	} 
}