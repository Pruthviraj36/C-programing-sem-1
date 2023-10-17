#include<stdio.h>
#include<string.h>
void main(){
	char a[999];
	printf("Enter string : ");
	gets(a);
	printf("entered string is : %s",a);
	printf("\nString length is : %d",strlen(a));
}
