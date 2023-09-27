#include<stdio.h>
void main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
}