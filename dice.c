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
  return 0;
}
