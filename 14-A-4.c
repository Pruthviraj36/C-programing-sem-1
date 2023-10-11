#include<stdio.h>
void main(){
    int n,i,sum=0,max,min;
    float avg;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element in a[%d] : ",i);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    min=max=a[0];
    for(i=1; i<n; i++){
         if(min>a[i]){
            min=a[i];
        }  
		if(max<a[i]){
            max=a[i];
        }       
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
    printf("sum = %d\n",sum);
    printf("avg = %f",avg=sum/n);
}