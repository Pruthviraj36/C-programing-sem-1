#include <stdio.h>
void main(){
    int num,r,sum=0,temp;

    printf("Input  a number: ");// let number be 123
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10){
         r=num % 10; //so r=123%10==3
         sum=sum+(r*r*r);// sum(0)=sum(0)+(3x3x3)
    }
    if(sum==temp)
         printf("%d is an Armstrong number.\n",temp);
    else
         printf("%d is not an Armstrong number.\n",temp);

}