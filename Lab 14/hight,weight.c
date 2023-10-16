#include<stdio.h>
void main(){
	int a[5],i,j,b[5],h=0,we=0;
	for(i=0;i<5;i++){
		printf("enter an hight:");
		scanf("%d",&a[i]);
		
	}
	for(j=0;j<5;j++){
		printf("enter an weight :");
		scanf("%d",&b[j]);
	}
	for(i=0;i<5;i++){
		if(a[i]>170 && b[i]<50){
			h++;
		}
	
	}
	printf("%d person height greater than 170 person weight less than 50",h);
}

