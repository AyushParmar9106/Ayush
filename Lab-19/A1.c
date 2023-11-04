#include<stdio.h>
int fac(int n);
void main()
{
    int n;
    printf("Enter number=");
    scanf("%d",&n);
    int ans=fac(n);
    printf("Factorial=%d\n",ans);

}
int fac(int n)
{
    if (n==0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}