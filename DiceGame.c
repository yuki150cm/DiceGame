#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main()
{
  int dice1=0, dice2=0, total=0;
  char name[MAX];
  srand((unsigned int)time(NULL));
//Greeting
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
//Dice Game
  printf("Rolling the dice...\n");
  dice1 = 1+rand()%6;
  dice2 = 1+rand()%6;
  total = dice1+dice2;
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",total);
//Won/Lost message
  if(total > 7)
  {
    printf("%s won!\n",name);
  }
  else printf("%s lost!\n",name);

  return 0;
}
