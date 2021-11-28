#include <stdio.h>

void cubeByReference( int *nPtr );
 int number = 5;
int main()
{
int *ptr;

   printf( "The original value of number is %d", number );

   square( &number );

   printf( "\nThe new value of number is %d\n", number );
   cube(&number);
      printf( "\nThe new value of number is %d\n", number );

   return 0;

}

void square( int *nPtr )
{
   *nPtr=number*number ;
}
void cube(int *nPtr)
{

   *nPtr = number*5;
}
