#include<stdio.h>
void main(){
	float a,b,c,d;
	printf("enter a value: ");
	scanf("%f",&a);
	if(a>=10000){
		c=(a*20)/100;
		b=(a*80)/100;
	}
	else if(a>=20000){
		c=(a*25)/100;
		b=(a*90)/100;
	}
	else if(a>=30000){
		c=(a*30)/100;
		b=(a*95)/100;
	}
	else if(a<10000){
		c=(15*a)/100;
		b=(a*7)/100;
	}
	d=a+b+c;
	printf("gross salary is = %f",d);
}
