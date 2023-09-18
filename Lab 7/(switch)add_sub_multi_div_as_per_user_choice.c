#include<stdio.h>
void main(){
	int a,b,c;
	char z;

	printf("enter a 2 int no. :");
	scanf("%d %d", &a,&b);
		printf("enter choice :");
	scanf(" %c", &z);
	
	switch(z){
		    case '+':
			c=a+b;
			break;
		
		 case '-':
			c=a-b;
			break;
			
			 case '*':
			c=a*b;
			break;
			
			 case '/':
			c=a/b;
			break;
		
	}
	printf("your ans = %d",c);
}
