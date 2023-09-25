#include<stdio.h>
void main(){
	int num, sum=0, firstdigit,lastdigit;
	printf("enter any number to find sum :");
	scanf("%d",&num);
	lastdigit = num%10;
	firstdigit = num;
	while(num>=10){
		num=num/10;
		
	}
	firstdigit=num;
	sum = firstdigit + lastdigit;
	printf("sum of first and last digit = %d", sum);
}
