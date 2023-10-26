#include<stdio.h>
float simpleintrest(int,int,int);

void main(){
	int p,n,r;
		float result;
	printf("enter a value of p & n & r");
	scanf("%d %d %d",&p,&n,&r);
	result = simpleintrest(p,n,r);
	
	
	printf("result =%f",result);
	
}
float simpleintrest(int p,int n,int r){
	float result;
	result = (p*n*r)/100;
	
	return result;
}
