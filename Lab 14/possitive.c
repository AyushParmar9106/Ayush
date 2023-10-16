#include<stdio.h>
void main(){
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int po=0,ne=0,i,arr[n];
	for(i=0;i<n;i++){
		printf("enter an elements for array:");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++){
		if(arr[i]<0){
			po++;
		}
		else{
			ne++;
		}
	
	}
		printf("%d\n",ne);
		printf("%d",po);
}
