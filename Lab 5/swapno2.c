#include<stdio.h>
void main(){
	int a,b;
	printf("enter an integer val:");
	scanf("%d",&a);
	printf("enter an integer val:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,b=%d",a,b);
	
	
	
}
