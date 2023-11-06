#include<stdio.h>
struct employee{
	char name[50];
	int id;
	float salary;
};
int main(){
	struct employee emp;
	printf("\nemployee details are :");
	printf("\nname:%s",emp.name);
	scanf("%s",emp.name);
	printf("\nID: %d",emp.id);
	scanf("%d",&emp.id);
	printf("\nsalary: %f\n",emp.salary);
	scanf("%f",&emp.salary);
}
