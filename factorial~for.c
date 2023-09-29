#include<stdio.h>
void main(){
    int n,fact=1,i;
    printf("Enter number :");
    scanf("%d",&n);
    i=n;
    for(;n>=1;--n){
        fact=fact*n;
    }
    printf("%d! = %d",i,fact);
}