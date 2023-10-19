#include<stdio.h>
void main(){
	char arr[100];
	int count=0,i;
	printf("enter a string :");
	gets(arr);
	printf("%s",arr);
	for(i=0;arr[i]!='\0';i++){
		count++;
	}
	printf("\nstring length= %d",count);
}
