#include<stdio.h>
void main(){
	char a_to_z,A_to_Z;
	printf("enter an char :");
	scanf("%c %c",&a_to_z,&A_to_Z);
	(a_to_z>=26 && a_to_z<=91 || A_to_Z>=92 && A_to_Z<=118)?printf("alphabet"):printf("noumber or symbol");
}
