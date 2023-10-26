#include<stdio.h>
void main(){
	int a=5,temp,b=10;
	printf("before=%d %d",a,b);
	swap(&a,&b);
	printf("\nafter=%d %d",a,b);
	
}
void swap(int *a,int *b){
	int temp= *a;
*a=*b;
*b=temp;
}


