#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a,b;
  printf("Rolling the dice...\n");
  srand(time(NULL));
  a = rand()%6+1;
  b = rand()%6+1;

  printf("Die 1:%d\nDie 2:%d\n",a,b);
  printf("Total value: %d\n",a+b);
  if(a+b>7) printf("You won\n");
  else printf("You lost\n");
  return 0;
}
