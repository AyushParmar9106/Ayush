#include<stdio.h>
void main(){
	int n,i=1,flag=0;
	printf("enter a number : ");
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
		
	}if(flag==0){
		printf("%d is a prime no. ",n);
		
	}
	else{
		printf("%d is not a prime no. ",n);
	}
}
