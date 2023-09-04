#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("Enter a char: ");
	scanf("%c",&c);
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter a value: ");
	scanf("%d",&b);
	
	
	if(c=='+'){
		printf("%d",c=a+b);
	}
	if(c=='-'){
		printf("%d",c=a-b);
	}
	if(c=='*'){
		printf("%d",c=a*b);
	}
	if(c=='/'){
		printf("%d",c=a/b);
	}
	printf("answer = %d",c);
}
