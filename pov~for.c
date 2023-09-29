#include <stdio.h>
int main(){
	
    long int base,exp,result=1;
    printf("Enter a value of base		: ");
    scanf("%ld", &base);
    printf("Enter a value of exponent	: ");
    scanf("%ld", &exp);
    printf("\n%d to the power %d is		= ",base,exp);
    for(;exp != 0;--exp){
        result = base * result;
    }
    printf("%ld",result);
    return 0;
}