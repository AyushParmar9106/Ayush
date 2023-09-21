#include<stdio.h>

//#include<conio.h>

int main()

{

int i,sum=0;

for(i=101;i<=200;i++)

{

if(i%7==0)

{
    printf("%d\n",i);

sum=sum+i;

}
}
printf("\n Sum of all no between 100 and 200 ");

printf("which is divisible by 7 is :: %d\n",sum);

return 0;

}
