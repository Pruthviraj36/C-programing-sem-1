#include<stdio.h>
void main(){
	char a[26],b[26],upper='A',lower='a';
	int n,j;
	for( j = 65; j <= 90; j++){
		a[j]=upper;
		upper++;
	}	
	for( j = 97; j <= 122; j++){
		b[j]=lower;
		lower++;
	}
	printf("Enter the ACSII value : ");
	scanf("%d",&n);
	if( n >= 65 && n <= 90){
		printf("Alphabet is : %c",a[n]);
	}
	else if( n >= 97 && n <= 122){
		printf("Alphabet is : %c",b[n]);
	}
}
