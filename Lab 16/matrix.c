#include<stdio.h>
void main(){
	int i,j,row,col;
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
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
