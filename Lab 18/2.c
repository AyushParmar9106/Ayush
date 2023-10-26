#include<stdio.h>
void maxmin(int,int);

void main(){
	int a,b;
	printf("enter a value of a & b ");
	scanf("%d %d",&a,&b);
	
	maxmin(a,b);
}
void maxmin(int a,int b)
{

 if(a>b){
	printf("max =%d",a);
}
else if(a<b){
	printf("max =%d",b);
}
}
