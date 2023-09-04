#include<stdio.h>
void main(){
	int a=34,b=67,c=23;
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c is greater");
		}
	}
	else{
      if(b>c){
      	printf("b is greater");
	  }
	  else{
	  	printf("c is greater");
	  }
	}
}
