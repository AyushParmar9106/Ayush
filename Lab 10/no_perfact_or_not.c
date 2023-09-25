#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("enter a number ; ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			printf("%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("=%d",sum);
	if(sum==n){
		printf("%dis a perfact no ",n);
		
	}
	else{
		printf("%d is not a perfact no ",n);
	}
}
