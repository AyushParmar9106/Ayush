#include<stdio.h>
void main(){
	int fact=1,i=1,n;
	scanf("%d",&n);
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}
