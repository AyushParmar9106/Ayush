#include<stdio.h>

void arr(int a[10]);

void main()
{
    int a[10];

    arr(a);

    for (int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}

void arr(int a[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter elements in array a[%d]:",i);
        scanf("%d",&a[i]);
    }
}