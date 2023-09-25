#include<stdio.h>
void main(){
	int i,n,sum=0,numbers;
	float average;
	printf("\nplease enter a number\n");
	scanf("%d",&n);
	printf("\nplease enter elements one by one\n");
	for(i=0;i<n;++i){
		scanf("%d",&numbers);
		sum=sum+numbers;
		average=sum/n;
	}
	printf("\nsum of the %d number = %d",n,sum);
	printf("\naverage of the %d numbers = %.4f",n,average);
	
}
