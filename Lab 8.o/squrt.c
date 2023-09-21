#include<stdio.h>
#include<math.h>
int main()
{
      int i=1;
      float square_roots;
      
      printf("Square roots of numbers from 1 to 9 are:\n\n");
      for(i=1;i<=9;i++)
      {
            square_roots=sqrt(i);
            printf("\t%d = %.2f\n",i,square_roots);
      }
      return 0;
}
