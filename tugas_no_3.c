#include <stdio.h>
int main()
{
   int i,h;
   for (i =5 ; i >=2; i--)
  {
   for (h =1 ;h <=i ; h++)
     {
           printf("* ");
         }
           printf("\n");
    }
   for (i =1 ; i <= 5; i++)
  {
   for (h =1 ;h  <= i; h++)
      {
           printf("* ");
         }
           printf("\n");
    }return 0;
}

