#include<stdio.h>
void main(){
	int first=0,second=1,third,i,n;
	printf("enter the length of the fibonaci serise \n");
	scanf("%d",&n);
	printf("the fibonaci series is :\n");
	printf("%d%d\n\n",first,second);
	for(i=0;i<=n;i++){
		third=first+second;
		printf("%d\n",third);
		first=second;
		second=third;
	}
}
