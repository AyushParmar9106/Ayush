//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr
#include<stdio.h>
#include <string.h>
void main()
{
    char s1[10],s2[10];
    printf("Enter elements in string 1:");
    gets(s1);
    printf("\nEnter elements in string 2:");
    gets(s2);
    printf("String length=%d",strlen(s1));
    if (strcmp(s1,s2)==0)
    {
        printf("\nsame strings");
        }
        else 
        {
            printf("\ndifferent strings");
            }
             
        strcat(s1,s2);
        printf("\n%s",s1);
        strcpy(s1,s2);
        printf("\n%s",s1);
        strrev(s1);
        printf("\nReversed String = %s\n",s1);
        printf("\n%s",strlwr(s1));
        printf("\n%s",strupr(s2));

}