#include<stdio.h>
void main(){
    int n,i,odd=0,even=0,zero=0;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element in a[%d] : ",i);
        scanf("%d",&a[i]);
        if(a[i]==0){
            zero++;
        }
        else if(a[i]%2 == 0){
            even++;
        }
        else if(a[i] != 0){
            odd++;
        }
    }
    printf("Even =  %d\nOdd =   %d\nZero =  %d",even,odd,zero);
}