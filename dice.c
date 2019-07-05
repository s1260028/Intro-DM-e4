#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   char name[50];
  int a,b;
  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello,%s!\n",name);
  printf("Rolling the dice...\n");
  srand(time(NULL));
  a = rand()%6+1;
  b = rand()%6+1;

  printf("Die 1:%d\nDie 2:%d\n",a,b);
  printf("Total value: %d\n",a+b);
  return 0;
}
