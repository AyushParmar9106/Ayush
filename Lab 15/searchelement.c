#include<stdio.h>
void main(){
		int n;
	printf("enter a size of array: ");
	scanf("%d",&n);
	int a[n],i,c=0;
	for(i=0;i<n;i++){
		printf("enter a value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	int f=0,temp=0;
	printf("enter search element :");
	scanf("%d",&f);
	for(i=0;i<n;i++){
		if(f==a[i]){
			temp=1;
		}
	}
	if(temp==1){
			printf("element found");
		}
		else{
			printf("element not found");
		}
}
