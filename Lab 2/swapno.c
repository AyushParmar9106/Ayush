#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter an integer val:");
	scanf("%d",&a);
	printf("enter an integer val:");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	
	printf("a=%d,b=%d",a,b);
	
	
	
}
