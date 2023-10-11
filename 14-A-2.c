#include<stdio.h>
void main(){
    int n,i,zero=0,positive=0,negative=0;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element in a[%d] : ",i);
        scanf("%d",&a[i]);
        if(a[i]==0){
            zero++;
        }
        else if(a[i]<0){
            negative++;
        }
        else if(a[i]!=0){
            positive++;
        }
    }
    printf("zero = %d\nNegative = %d\npositive = %d",zero,negative,positive);
}