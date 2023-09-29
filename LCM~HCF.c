#include<stdio.h>
int main(){
	 int num1, num2, hcf, lcm, i;
	 printf("Enter first number: ");
	 scanf("%d", &num1);
	 printf("Enter second number: ");
	 scanf("%d", &num2);
	 /* Finding HCF */
	 /* check i<=num2 in condition of for loop. */
     /* let num1=12 and num2=6 */
	 for(i=1; i<=num1; i++){
		  if(num1%i==0 && num2%i==0){
		   	hcf = i;// num1==12 && num2==6 
		  }
	 }
	 /* Finding LCM */
	 lcm = (num1 * num2)/hcf;// (12*6)/6
	 printf("HCF = %d\nLCM = %d", hcf, lcm);
	 return(0);
}