#include<stdio.h>
void main(){
	int num, digit,i;
	int frequency[10] = {0};
	printf("enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		frequency[digit]++;
		num/=10;
	}
	printf("frequency of each digit:\n");
	for(i=0;i<10;i++){
		printf("digit %d occurs %d times\n",i,frequency[i]);
	}
	
}
