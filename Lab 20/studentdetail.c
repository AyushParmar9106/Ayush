#include<stdio.h>
struct student{
	char name[30];
	float percentage;
	int age;
};
void main(){
	struct student student;
	int i;
	for(i=1;i<=5;i++){
		printf("\nenter student name:");
		scanf("%s",student.name);
			printf("\nenter percentage:");
		scanf("%f",&student.percentage);
			printf("\nenter age:");
		scanf("%d",&student.age);
	}
	for(i=1;i<=5;i++){
		printf("\nstudent name:%s",student.name);
			printf("\npercentage:%f",student.percentage);
			printf("\nage:%d",student.age);	
	}
}
