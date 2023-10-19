#include<stdio.h>
void main(){
	int i,j,row,col,po=0,ne=0,zero=0;
	printf("enter i =");
	scanf("%d",&row);
	printf("enter j =");
	scanf("%d",&col);
	int arr[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\n%d %d",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]>0){
				po++;
			}
			else if(arr[i][j]==0){
				
				zero++;
			}
			else{
				ne++;
			}
		}
	
	}
	printf("negetive = %d\n",ne);
		printf("positive = \n%d",po);
		printf("zero = %d",zero);
		
}
