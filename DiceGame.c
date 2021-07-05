#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main()
{
  int dice1=0, dice2=0, total=0;
  srand((unsigned int)time(NULL));
//Dice Game
  printf("Rolling the dice...\n");
  dice1 = 1+rand()%6;
  dice2 = 1+rand()%6;
  total = dice1+dice2;
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",total);

  return 0;
}
