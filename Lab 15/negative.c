#include<stdio.h>
void main(){
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int ne=0,i,arr[n];
	for(i=0;i<n;i++){
		printf("enter an elements for array:");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++){
		if(arr[i]<0){
			ne++;
		}
	
	
	}
		printf("negetive element =%d\n",ne);
		
}
