#include <stdio.h>

// defines the global number variable, which actually allocates space in memory
// for the variable, in contrast to only declaring it when we use extern 
int number = 0;

void add_one()
{
  number++;
}

void print()
{
  printf("number: %d\n", number);
}