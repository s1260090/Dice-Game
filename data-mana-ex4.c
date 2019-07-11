#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char name[20];
  int x, y;
  printf("What is your name?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  printf("Rolling the dice...\n");
  srand((unsigned) time(NULL));
  x = rand()%6+1;
  y = rand()%6+1;
  printf("Die 1: %d\n", x);
  printf("Die 2: %d\n", y);
  printf("Total value: %d\n", x+y);
  if(x+y<=7) printf("%s lose...\n", name);
  else printf("%s won!\n", name);
  return 0;
}
