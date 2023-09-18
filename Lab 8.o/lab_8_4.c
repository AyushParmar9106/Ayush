#include<stdio.h>
void main(){
	int i=0,n,sum=0;
	
	printf("enter a no. :");
	 scanf("%d",&n);
	 while(i<=n){
	 	sum=sum+i;
	 	i=i+1;
	 }
	 printf("%d",sum);
}
