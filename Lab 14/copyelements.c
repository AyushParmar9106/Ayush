#include<stdio.h>
void main(){
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n],b[n],i;
	
	for(i=0;i<n;i++){
		printf("enter an elements for array:");
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	
	for(i=0;i<n;i++){
	
		printf("%d\n",b[i]);
	}
	
}
