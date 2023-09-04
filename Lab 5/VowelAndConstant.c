#include<stdio.h>
void main(){
	char a_to_z;
	printf("enter an char val:");
	scanf("%c",&a_to_z);
	if(a_to_z==105 || a_to_z==97 || a_to_z==101 || a_to_z==111 || a_to_z==117){
		printf("Vowel\n");
	}
	else{
		printf("constants");
		
	}
}
