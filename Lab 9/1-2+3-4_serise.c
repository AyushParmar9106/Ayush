#include<stdio.h>
void main(){
	int i=0,n,c=0,sum=0,b=0;
	scanf("%d",&n);
	while(i<=n){
		 if(i%2==1){
	 	c++;
	 	sum=sum+i;
	 }else {b++;
	sum=sum-i;
	 }
	
	 i=i+1;	 	
	 } 
	 printf("%d",sum);
	}

