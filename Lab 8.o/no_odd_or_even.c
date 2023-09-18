#include<stdio.h>
void main(){
	int i=1,n,c=0,b=0;
	printf("enter a no. :");
	scanf("%d",&n);
	 while(i<=n){
	 if(i%2==1){
	 	c++;
	 	
	 }else b++;
	
	 i=i+1;	 	
	 }
	 printf("%d \n",c);
	 printf("%d",b);
}
