#include<stdio.h>
void main(){
    int n,i,hi=0,wi=0;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int h[n],w[n];
    for(i=1;i<=5;i++){
        printf("Enter height of person %d : ",i);
        scanf("%d",&h[i]);
        printf("Enter weight of person %d : ",i);
        scanf("%d",&w[i]);
        if(h[i]>170){
            hi++;
        }
        if(w[i]<50){
            wi++;
        }
    }
    printf("There are total %d persons with height greater than 170 \n",hi);
    printf("There are total %d persons with weight greater than 50",wi);
}