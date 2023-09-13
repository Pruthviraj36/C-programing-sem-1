#include<stdio.h>
  
       void main()    {   
        float HRA,DA,SALARY,Grosssalary;
        printf("Enter the SALARY :");
        scanf("%f",&SALARY);
        
          if(SALARY>=10000 && SALARY<20000) {
           	Grosssalary = (0.2*SALARY) + (0.8*SALARY) + (SALARY);
           	printf("the Gross salary is:%f",Grosssalary);
		   }
		   else if(SALARY>=20000 && SALARY<30000) {
           	Grosssalary = (0.25*SALARY) + (0.9*SALARY) + (SALARY);
           	printf("the Gross salary is:%f",Grosssalary);
		   }
		    else if(SALARY>=30000) {
           	Grosssalary = (0.3*SALARY) + (0.95*SALARY) + (SALARY);
           	printf("the Gross salary is:%f",Grosssalary);
		   }     
       	
       	
	   }
