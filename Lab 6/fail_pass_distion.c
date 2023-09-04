#include<stdio.h>
void main(){
	int A,b,c,d,f,a;
	
	printf("enter a value: ");
	scanf("%d %d %d %d %d",&A,&b,&c,&d,&f);
	a=(A+b+c+d+f)/(float)5;
	if(a<35){
		printf("fail");
	}
	else if(a>=35 && a<45){
		printf("pass class");
	}
	else if(a>=45 && a<60){
		printf("second class pass");
	}
	else if(a>=60 && a<70){
		printf("first class pass");
	}
	else if(a>=70) {
		printf("distinction");
	}
	
	
    

}
