#include <stdio.h>
int main( int argc, char *argv[] )  
{
 if (argc == 2)
   printf("Hello,  %s\n", argv[1]);
  else 
   printf("un seul argument est permis dans ce cas\n ");
 
  return 0 ;
}
