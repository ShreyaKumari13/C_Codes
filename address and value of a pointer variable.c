//address and value of a pointer variable
#include <stdio.h>
int main()
{
   int i;
   int *p;
   p = &i;
   *p = 5;
   printf("address of i = %u\n",&i);
   printf("address of i = %u\n",p);
   printf("address of p = %u\n",&p);
   printf("value of i %d\n",i);
   printf("value of i %d\n",*(&i));
   printf("value of i %d\n",*p);
   printf("value of p %d\n",p);
   return 0;
}