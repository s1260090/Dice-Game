#include <stdio.h>
#include <stdlib.h>

int main(){
int x, y;
printf("Rilling the dice...\n");
x = rand();
y = rand();
printf("Die 1: %d\n", x);
printf("Die 2: %d\n", y);
printf("Total value: %d\n", x+y);
return 0;
}

