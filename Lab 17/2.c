#include<stdio.h>
void main(){
	int i,*i1;
	float f,*f1;
	char c,*c1;
	double d,*d1;
	
	printf("enter a int value:");
	scanf("%d",&i);
	
	printf("enter a float value:");
	scanf("%f",&f);
	
	printf("enter a char value:");
	scanf("%c",&c);
	
	printf("enter a double value:");
	scanf("%lf",&d);
	
	i1=&i;
	printf("address of int : %d\n",i1);
	printf("enter int value;%d\n",*i1);
	
	f1=&f;
	printf("address of float : %d\n",f1);
	printf("enter int value;%f\n",*f1);
	
	c1=&c;
	printf("address of char : %d\n",c1);
	printf("enter char value;%c\n",*c1);
	
	d1=&d;
	printf("address of int : %d\n",d1);
	printf("enter int value;%lf\n",*d1);
	
}
