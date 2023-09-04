#include<stdio.h>
void main(){
	char ch;
	printf("enter a char: ");
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z'){
		printf("charcter is uppercase");
	} 
	else if(ch>='a' && ch<='z'){
		printf("charcter is l0wercase");
	}
	else if(ch>='0' && ch<='9'){
		printf("charcter is digit");
	}
	else {
		printf("special symbol");
	}
}
