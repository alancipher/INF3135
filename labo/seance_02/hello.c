#include <stdio.h>

void boucleAvant(int )
void  boucleApres (int )

int main( int argc, char *argv[] )  
{
 if (argc == 2)
   printf("Hello,  %s\n", argv[1]);
  else 
   printf("un seul argument est permis dans ce cas\n ");
 
  return 0 ;
}

void boucleAvant(int x)
{
for (int i = 0; i <x; ++i)
 printf("%d\n",i);
}

void boucleApres (int y)
{
for (int j = 0; j< y; j++)
printf("%d\n", j);
}
