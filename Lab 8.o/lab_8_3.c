#include<stdio.h>
void main(){
	int i,n;
	printf("enter a i:");
	scanf("%d",&i);
	printf("enter a no. :");
	 scanf("%d",&n);
	 while(i<=n){
	 	if(i%2==0)
	 	printf("%d ",i);
	 	i=i+1;
	 }
}
