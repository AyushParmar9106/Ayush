#include<stdio.h>
void main(){
	int n;
	
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[n],i,max=0,min=9106,sum=0,ave=0;
	
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
		sum+=a[i];
		ave=sum/n;
	}
	
	printf("sum = %d\navg = %d\nmax = %d\nmin = %d",sum,ave,max,min);
}
