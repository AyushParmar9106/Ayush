#include<stdio.h>
float max(float,float,float);
void main(){
	float a,b,c;
	float result;
	printf("enter a value a & b & c ");
	scanf("%f %f %f",&a,&b,&c);
	maximum(a,b,c);
	

	
}
void maximum(float a,float b,float c){
	(a>b)?((a>c)?printf("a is max"):printf("c is max")):((b>c)?printf("b is max"):printf("c is max"));
	
	
}
