#include<stdio.h>
void main(){
	int i,j,row,col;
	printf("enter i =");
	scanf("%d",&row);
	printf("enter j =");
	scanf("%d",&col);
	int a[row][col],b[row][col],c[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\na[%d%d]",i,j);
			scanf("%d",&a[i][j]);
			printf("\nb[%d%d]",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
