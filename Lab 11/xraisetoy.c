#include<stdio.h>
void main(){
	int i=1,power=1,x,y;
	printf("x =");
	scanf("%d",&x);
	printf("y =");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		power*=x;
	
    }
	
	printf("%d",power);
}






//printf("%d*%d = %d\n",n,i,n*i);
