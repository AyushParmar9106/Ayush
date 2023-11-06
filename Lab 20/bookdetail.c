#include<stdio.h>
struct book{
	char name[50];
	char authorName[30];
	char publication[30];
	int price;
};
void main(){
	struct book book;
	int i;
	for(i=0;i<3;i++){
	
	printf("\nenter book name:");
	scanf("%s",book.name);
		printf("\nenter author name:");
	scanf("%s",book.authorName);
		printf("\nenter publication:");
	scanf("%s",book.publication);
		printf("\nenter price:");
	scanf("%d",&book.price);
}
for(i=0;i<3;i++){

		printf("\n book name:%s",book.name);
			printf("\n author name:%s",book.authorName);
				printf("\n publication:%s",book.publication);
				printf("\n price:%d",book.price);
			}
}
